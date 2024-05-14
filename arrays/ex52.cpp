#include <iostream>
#include <vector>
#include <string>

using namespace std;

float cubed (float radius) {
    return radius * radius * radius;
}

float vol_sphere(float radius)
{
    return (4.0 / 3.0) * 3.14 * radius * cubed(radius);
}

//Exercise 5-2: Write a program to calculate the volume of a sphere, 4/3πr3.
int main()
{
    float val = vol_sphere(3.5);
    cout << val;
}