#include <iostream>
using namespace std;

class Customer {
private:
    string name;
    string accountno;
    string password;
    int pin;

public:
    void setName(string a) { name = a; }
    void setAccount(string b) { accountno = b; }
    void setPassword(string c) { password = c; }
    void setPin(int d) { pin = d; }

    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountno << endl;
        cout << "PIN Verified\n";
    }
};

int main() {
    Customer A1;

    string name, acc, pass;
    int pin;

    cout << "Enter your name: ";
    getline(cin, name);
    A1.setName(name);

    cout << "Enter your account number: ";
    cin >> acc;
    A1.setAccount(acc);

    cout << "Enter your password: ";
    cin >> pass;

    if (pass != "12345") {
        cout << "Access Denied\n";
        return 0;
    }

    A1.setPassword(pass);

    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin < 100 || pin > 9999) {
        cout << "Wrong PIN\n";
        return 0;
    }

    A1.setPin(pin);

    A1.display();
}
