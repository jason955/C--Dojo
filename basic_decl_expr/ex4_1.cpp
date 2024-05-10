#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_name()
{
    vector<string> name {"Jason", "Barrett"};

    cout << "Name: " << "\n" << "\t";
    for (const string& word : name)
    {
        cout << word << " ";
    }
    cout << endl;
}

void print_name_char()
{
    char name[] = "Jason Barrett";

    cout << "Name: " << "\n" << "\t";
    for (const char word : name)
    {
        cout << word << " ";
    }
    cout << endl;
}

void print_social()
{
    vector<string> social {"xxx", "yy", "zzzz"};

    cout << "Social: " << "\n" << "\t";
    for (const string& word : social)
    {
        cout << word << " ";
    }
    cout << endl;
}

void print_birthday()
{
    vector<string> name {"Jason", "Barrett"};
    int month = 6;
    int day = 1;
    int year = 1995;
    cout << "Birthday: " << month << "-" << day << "-" << year;

    cout << endl;
}

//Exercise 4-1:Write a program to print your name, Social Security number, and date of birth.
int main()
{
    print_name();
    print_name_char();
    print_social();
    print_birthday();

}