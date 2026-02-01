/**
 * @file hello.cpp
 * @author Ishani
 * @date 26-01-2026
 * @brief Program to greet user in different languages
 */

#include <iostream>
using namespace std;

/**
 * @brief Displays greeting based on language choice
 * @param name Name of the user
 * @param choice Language selected by the user
 */
void sayHello(string name, int choice)
{
    if (choice == 1)
        cout << "Hello, " << name << "!" << endl;
    else if (choice == 2)
        cout << "Hola, " << name << "!" << endl;
    else if (choice == 3)
        cout << "Bonjour, " << name << "!" << endl;
    else
        cout << "Invalid choice!" << endl;
}

int main()
{
    string name;
    int choice;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Choose language:\n";
    cout << "1. English\n2. Spanish\n3. French\n";
    cin >> choice;

    sayHello(name, choice);
    return 0;
}
