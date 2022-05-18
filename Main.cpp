#include<iostream>
#include<cstring>
using namespace std;
class Register{
    public:
     string name;
     string password;
     string con_password;
     public:
     void get(){
         cout<<"Enter you name: "<<endl;
         cin>>name;
         cout<<"Enter password: "<<endl;
         cin>>password;
         cout<<"Enter con_password: "<<endl;
         cin>>con_password;
     }
     void display(){
         cout<<"********* Displaying Information **********"<<endl;
         cout<<"Name : "<<name<<endl;
         if(password == con_password){
             cout<<"Password : "<<password<<endl;
         }
         else{
             cout<<"password not matched"<<endl;
         }
     }

};
class login : public Register{
    public:
    string Log_name;
    string Log_password;
    void get_login(){
        cout<<"********** enter your details *************"<<endl;
        cout<<"Username: "<<endl;
        cin>>Log_name;
        cout<<"Password: "<<endl;
        cin>>Log_password;
    }
    void show(){
        if(Log_name == name && Log_password == con_password){
            cout<<"Successfully logined"<<endl;
            cout<<"but we dont have data base to display your info"<<endl;
        }
        else{
            cout<<"invalid password or username"<<endl;
        }
    }

};
int main(){
    login a;
    a.get();
    int optn;
    cout<<"1.Display information"<<endl;
    cout<<"2.Login"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Enter your option"<<endl;
    cin>>optn;

    switch(optn){
        case 1:
        a.display();
        break;
        case 2:
        a.get_login();
        a.show();
        break;
        case 3:
        cout<<"exited successful"<<endl;
        break;
        default:
        cout<<"invalid input.......!"<<endl;

    }   
    cout<<"\n\n***************** Thank you........! ****************"<<endl; 
    
    return 0;
}