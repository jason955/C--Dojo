
#include <iostream>
#include <vector>
#include <string>

using namespace std;


void H_ascii_art() 
{
    for (int i = 0; i < 7; i++) {
        if (i == 3) {
            cout << "*****";
        }
        else {
            cout << "*   *";
        }
        cout << "\n";
    }
}
void E_ascii_art() 
{
    for (int i = 0; i < 7; i++) {
        if (i == 0 || i == 3 || i == 6) {
            cout << "*****";
        }
        else {
            cout << "*";
        }
        cout << "\n";
    }
}
void L_ascii_art() 
{
    for (int i = 0; i < 7; i++) {
        if ( i == 6) {
            cout << "*****";
        }
        else {
            cout << "*";
        }
        cout << "\n";
    }
}
void O_ascii_art() 
{
    for (int i = 0; i < 7; i++) {
        if (i == 0 || i == 6) {
            cout << "*****";
        }
        else {
            cout << "*   *";
        }
        cout << "\n";
    }
}

void hello_ascii_art() {
    H_ascii_art();
    cout << "\n";
    E_ascii_art();
    cout << "\n";
    L_ascii_art();
    cout << "\n";
    L_ascii_art();
    cout << "\n";
    O_ascii_art();
}

//Exercise 4-4: Write a program to print "HELLO" in big block letters where each letter is 7 characters high and 5 characters wide.
int main()
{
    hello_ascii_art();
}