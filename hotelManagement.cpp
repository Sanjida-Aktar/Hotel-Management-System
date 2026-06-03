#include<bits/stdc++.h>

using namespace std;

class Admin{
    string username;
    string password;
    public:
    Admin() {}
    Admin(string u, string p):username(u), password(p) {}

    void input(){
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter password: ";
        cin>>password;
    }

    int login(){
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
                return 1;
            }
        }
        cout<<"Login failed!"<<endl;
        return 0;
    }
    
};
int main(){
    Admin admin;
    admin.input();
    admin.login();
    return 0;
}