
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

class temp {
    string username, email, password;
    string serachname, serachpass, serachemail;
    fstream file;

public:
    void login();
    void signup();
    void forget();
} obj;

int main() {
    char choice;

    do {
        cout << "\n\n1- Login";
        cout << "\n2- Sign-Up";
        cout << "\n3- Forget Password";
        cout << "\n4- Exit";
        cout << "\nEnter your choice :: ";
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
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
            cout << "Program exited.";
            break;

        default:
            cout << "Invalid Selection!";
        }

    } while (choice != '4');

    return 0;
}

void temp::signup() {
    cout << "\nEnter your UserName :: ";
    getline(cin, username);

    cout << "Enter your Email :: ";
    getline(cin, email);

    cout << "Enter your Password :: ";
    getline(cin, password);

    file.open("loginData.txt", ios::out | ios::app);

    if (!file.is_open()) {
        cout << "File opening failed!";
        return;
    }

    file << username << "*" << email << "*"
         << password << endl;

    file.close();

    cout << "\nSign-Up successful!";
}

void temp::login() {
    cout << "\n-------- Login --------\n";

    cout << "Enter your User Name :: ";
    getline(cin, serachname);

    cout << "Enter your Password :: ";
    getline(cin, serachpass);

    file.open("loginData.txt", ios::in);

    if (!file.is_open()) {
        cout << "No account data found!";
        return;
    }

    bool found = false;

    while (getline(file, username, '*') &&
           getline(file, email, '*') &&
           getline(file, password)) {

        if (username == serachname) {
            found = true;

            if (password == serachpass) {
                cout << "\nAccount login successful!";
                cout << "\nUsername :: " << username;
                cout << "\nEmail :: " << email << endl;
            } else {
                cout << "\nPassword is incorrect!";
            }

            break;
        }
    }

    if (!found) {
        cout << "\nUsername not found!";
    }

    file.close();
}

void temp::forget() {
    cout << "\nEnter your UserName :: ";
    getline(cin, serachname);

    cout << "Enter your Email :: ";
    getline(cin, serachemail);

    file.open("loginData.txt", ios::in);

    if (!file.is_open()) {
        cout << "No account data found!";
        return;
    }

    bool found = false;

    while (getline(file, username, '*') &&
           getline(file, email, '*') &&
           getline(file, password)) {

        if (username == serachname &&
            email == serachemail) {

            cout << "\nAccount found!";
            cout << "\nYour password :: " << password << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nAccount not found!";
    }

    file.close();
}
