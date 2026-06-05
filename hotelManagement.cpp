#include<bits/stdc++.h>

using namespace std;
//===============================
// Admin class to handle login and dashboard
class Admin{
    string username;
    string password;
    public:
    Admin() {}
    void input();
    int login();
    void dashboard();    
};

//===============================
// RoomManagement class to handle room-related operations

class RoomManagement{
    int roomNumber;
    string roomType;
    double price;
    bool isAvailable;

    public:
    void addRoom();    
    void viewRooms();
    void searchRoom();
    void deleteRoom();
};

//===============================
// CustomerManagement class to handle customer-related operations
class CustomerManagement{
    int customerID;
    string name;
    string phone_number;
    string email;
    public:
    void addCustomer();
    void viewCustomers();
    void searchCustomer();
};


int main(){
    Admin admin;
    admin.input();
    admin.login();
    
    return 0;
}

//===============================
//login details input function
void Admin :: input(){
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;
}

int Admin :: login(){
        ifstream file("login.txt");
        if(!file.is_open()){
            cout<<"Error opening file!"<<endl;
            return 0;
        }
        string file_username, file_password;
        while(file>>file_username>>file_password){
            cout << "Read from file: " << file_username << " " << file_password << endl;
            if(file_username == username && file_password == password){
                cout<<"Login successful!"<<endl;
                dashboard();
                return 1; // Return success
                
            }
        }
        cout<<"Login failed!"<<endl;
        return 0;
    }
    

void Admin :: dashboard(){
        int choice;
        do{
            cout<<"\n=======Hotel Management System Dashboard=======\n";
            cout<<"1. Room Management\n";
            cout<<"2. Customer Management\n";
            cout<<"3. Booking Management\n";
            cout<<"4. Billing System\n";
            cout<<"5. Reports\n";
            cout<<"6. Exit\n";

            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice){
                case 1:{
                    cout<<"Room Management selected\n";
                    int roomChoice;
                    cout<<"\n1. Add Room"<<endl;
                    cout<<"2. View Rooms"<<endl;
                    cout<<"3. Search Room"<<endl;
                    cout<<"Enter your choice: ";
                    cin>>roomChoice;
                    RoomManagement rm;
                    if(roomChoice == 1){
                        rm.addRoom();
                    }
                    else if(roomChoice == 2){
                        rm.viewRooms();
                    }
                    else if(roomChoice == 3){
                        rm.searchRoom();
                    }
                    else if(roomChoice == 4){
                        rm.deleteRoom();
                    }
                    else{
                        cout<<"Invalid choice! Returning to dashboard.\n";
                    }
                    break;
                }
                case 2:{
                    cout<<"Customer Management selected\n";
                    int customerChoice;
                    cout<<"\n1. Add Customer"<<endl;
                    cout<<"2. View Customers"<<endl;
                    cout<<"3. Search Customer"<<endl;
                    cout<<"Enter your choice: ";
                    cin>>customerChoice;
                    CustomerManagement cm;

                    if (customerChoice == 1){
                        cm.addCustomer();
                    }
                    else if(customerChoice == 2){
                        cm.viewCustomers();
                    }
                    else if(customerChoice == 3){
                        cm.searchCustomer();
                    }
                    else{
                        cout<<"Invalid choice! Returning to dashboard.\n";
                    }
                    break;
                }
                case 3:
                    cout<<"Booking Management selected\n";
                    break;
                case 4:
                    cout<<"Billing System selected\n";
                    break;
                case 5:
                    cout<<"Reports selected\n";
                    break;
                case 6:
                    cout<<"Exiting...\n";
                    break;
                default:
                    cout<<"Invalid choice! Please try again.\n";
            }
            
            }
            while(choice != 6);
    }

    // ===============================
    // RoomManagement class functions

    void RoomManagement :: addRoom(){
        ofstream file("rooms.txt", ios::app);

        cout<<"Enter room number: ";
        cin>>roomNumber;
        cout<<"Enter room type(Standard/Deluxe/vip): ";
        cin>>roomType;
        cout<<"Enter price per night: ";
        cin>>price;
        isAvailable = true;
        file<<roomNumber<<" "<<roomType<<" "<<price<<" "<<isAvailable<<endl;

        file.close();
        cout<<"Room added successfully!"<<endl;
    }

    void RoomManagement :: viewRooms(){
        ifstream file("rooms.txt");
        if(!file.is_open()){
            cout<<"Error opening file!"<<endl;
            return;
        }
        int rNumber;
        string rType;
        double rPrice;
        bool rAvailable;

        cout<<"\n=======Room List=======\n";
        while(file>>rNumber>>rType>>rPrice>>rAvailable){
            cout<<"Room Number: "<<rNumber<<" | Type: "<<rType<<" | Price: "<<rPrice<<" | Available: "<<(rAvailable ? "Yes" : "No")<<endl;
        }
        file.close();
    }

    void RoomManagement :: searchRoom(){
        ifstream file("rooms.txt");
        if(!file.is_open()){
            cout<<"Error opening file!"<<endl;
            return;
        }
        int searchNumber;
        cout<<"Enter room number to search: ";
        cin>>searchNumber;
        int rNumber;
        string rType;
        double rPrice;
       

        if(file.is_open()){
            while(file>>rNumber>>rType>>rPrice){
                if(rNumber == searchNumber){
                    cout<< "Room is found!"<<endl;
                    file.close();
                    return;
                }
            }
            cout<<"Room not found!"<<endl;
            file.close();
        }
        

    }

    void RoomManagement :: deleteRoom(){
        ifstream file("rooms.txt");
        if(!file.is_open()){
            cout<<"Error opening file!"<<endl;
            return;
        }
        int deleteNumber;
        cout<<"Enter room number to delete: ";
        cin>>deleteNumber;
        int rNumber;
        string rType;
        double rPrice;
        bool rAvailable;

        ifstream file ("rooms.txt");
        while(file>>rNumber>>rType>>rPrice>>rAvailable){
            if(rNumber == deleteNumber){
                cout<<"Room is found and deleted!"<<endl;
                file.close();
                return;
            }
        }
    }

    // ==============================
    // CustomerManagement class functions
    void CustomerManagement :: addCustomer(){
        ofstream file("customers.txt", ios::app);

        cout<<"Enter customer ID: ";
        cin>>customerID;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter phone number: ";
        cin>>phone_number;
        cout<<"Enter email: ";
        cin>>email;

        file<<customerID<<" "<<name<<" "<<phone_number<<" "<<email<<endl;

        file.close();
        cout<<"Customer added successfully!"<<endl;
    }

    void CustomerManagement :: viewCustomers(){
        ifstream file("customers.txt");
        if(!file.is_open()){
            cout<<"Error opening file!"<<endl;
            return;
        }
        int cID;
        string cName, cPhone, cEmail;

        cout<<"\n=======Customer List=======\n";
        while(file>>cID>>cName>>cPhone>>cEmail){
            cout<<"Customer ID: "<<cID<<" | Name: "<<cName<<" | Phone: "<<cPhone<<" | Email: "<<cEmail<<endl;
        }
        file.close();
    }

    