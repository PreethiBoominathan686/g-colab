#include <iostream>
using namespace std;

int main() {
    string correctUsername = "Preethi";
    string correctPassword = "1234";

    string username, password;
    long long accountNumber;
    int choice;
    float balance = 0, amount;
    cout << "------ LOGIN ------" << endl;
    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if(username == correctUsername && password == correctPassword) {

        cout << "\nLogin Successful!" << endl;

        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "\n------ BANK MENU ------" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << "Amount Deposited Successfully!" << endl;
                cout << "Current Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if(amount <= balance) {
                    balance = balance - amount;
                    cout << "Amount Withdrawn Successfully!" << endl;
                    cout << "Current Balance: " << balance << endl;
                }
                else {
                    cout << "Insufficient Balance!" << endl;
                }
                break;

            case 3:
                cout << "Your Current Balance is: " << balance << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    }
    else {
        cout << "\nInvalid Username or Password!" << endl;
    }

}
