#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ascii_art() 
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

//Exercise 4-2: Write a program to print a block E using asterisks (*), where the E is 7 characters high and 5 characters wide.
int main()
{
    ascii_art();
}