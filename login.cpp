#include <iostream>
#include <fstream>
using namespace std;

class temp{
    string username,email,password;
    string serachname,serachpass,serachemail;
    fstream file;
    public:
    void login();
    void signup();
    void forget();
}obj;

int main() {
    char choice;
    cout<<"\n1- Login";
    cout<<"\n2- Sign-Up";
    cout<<"\n3- Forget Password";
    cout<<"\n4- Exit";
    cout<<"\nEnter your choice ::";
    cin>>choice;


    switch (choice){
    case '1':
     obj.login();   
        break;
    
    case '2':
     obj.signup();
        break;
    
    case '3':
     obj.forget();
        break;

    case '4':
     return 0;
        break;        
    default:
        cout<<"Invailed Selection";
        break;
    }
    return 0;
}
void temp :: signup(){
    cout<<"\nEnter your UserName ::";
    getline(cin,username);
    cout<<"Enter your Email ::";
    getline(cin,email);
    cout<<"Enter your Password ::";
    getline(cin,password);

    file.open("loginData.txt",ios :: out | ios :: app);
    file<<username<<"*"<<email<<"*"<<password<<endl;
    file.close();
}
void temp :: login(){

    cout<<"--------Login--------"<<endl;
    cout<<"Enter your User Name :: "<<endl;
    getline(cin,serachname);
    cout<<"Enter your password :: "<<endl;

    file.open("loginData.txt",ios :: in);
    getline(file,username,'*');
    getline(file,email,'*');
    getline(file,password,'\n');
    
    while(!file.eof()){
        if(username== serachname ){
            if(password == serachpass){
                cout<<"\nAccout login successfull....!";
                cout<<"\nUsername :: "<<username<<endl;;
                cout<<"\nEmail :: "<<email<<endl;;
            }else{
                cout<<"Password is incorrect...!";
            }
        }
    getline(file,username,'*');
    getline(file,email,'*');
    getline(file,password,'\n');
    }
    file.close();
}
void temp :: forget(){
    cout<<"\nEnter your UserName :: ";
    getline(cin,serachname);
    cout<<"\nEnter your Email :: ";
    getline(cin,serachemail);

   file.open("loginData.txt",ios :: in);
    getline(file,username,'*');
    getline(file,email,'*');
    getline(file,password,'\n');
    while(!file.eof()){
     if(username ==  serachname){
        if(email == serachemail){
        cout<<"\nAccount found...! "<<endl;
        cout<<"Your password :: "<<password<<endl;
        } else {
        cout<<"Accout not found...!";
      }
    }else {
       cout<<"Not Found...!";
    }
    }
    file.close();
}