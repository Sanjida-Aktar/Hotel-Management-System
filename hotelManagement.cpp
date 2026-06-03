#include<bits/stdc++.h>
using namespace std;

class Admin{
    string username;
    string password;
    public:
    Admin(string u, string p):username(u), password(p) {}
    bool login(string u, string p){
        return (u == username && p == password);
    }
};
int main(){
     
    return 0;
}