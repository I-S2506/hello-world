#include <iostream>
using namespace std;

void sayHello(string name, int choice) {
    if (choice == 1)
        cout << "Hello, " << name << "!" << endl;
    else if (choice == 2)
        cout << "Hola, " << name << "!" << endl;
    else if (choice == 3)
        cout << "Bonjour, " << name << "!" << endl;
    else if (choice == 4)
        cout << "Hallo, " << name << "!" << endl;      // German
    else if (choice == 5)
        cout << "Konnichiwa, " << name << "!" << endl; // Japanese
    else
        cout << "Invalid choice!" << endl;
}

int main() {
    string name;
    int choice;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Choose language:\n";
    cout << "1. English\n";
    cout << "2. Spanish\n";
    cout << "3. French\n";
    cout << "4. German\n";
    cout << "5. Japanese\n";

    cin >> choice;

    sayHello(name, choice);
    return 0;
}
