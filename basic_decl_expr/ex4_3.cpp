#include <iostream>
#include <vector>
#include <string>

using namespace std;

float rectangle_area(float width, float length) 
{
    return width * length;
}

//Exercise 4-3: Write a program to compute the area and circumference of a rectangle 3 inches wide by 5 inches long. What changes must be made to the program so it works for a rectangle 6.8 inches wide by 2.3 inches long?
int main()
{
    cout << "Rectangle area 1 " << rectangle_area(3, 5);
    cout << "\n";
    cout << "Rectangle area 2 " << rectangle_area(6.8, 2.3);

}