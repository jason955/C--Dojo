#include <iostream>
#include <vector>
#include <string>

using namespace std;

float rectangle_perimeter(float height, float width)
{
    return height + width;
}


//Exercise 5-3: Write a program to print out the perimeter of a rectangle given its height and width. perimeter = 2 (width+height)
int main()
{
    float val = rectangle_perimeter(3, 4);
    cout << val;
}