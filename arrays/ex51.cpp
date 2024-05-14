#include <iostream>
#include <vector>
#include <string>

using namespace std;

float convert_celcius_to_farenheit(float temp)
{
    float t = (1.8 * temp) +  32;
    return t;
}


//Exercise 5-1: Write a program that converts Celsius to Fahrenheit. F = 9/5 C+32
int main()
{
    float temp = 23.55;
    cout << temp << " Celcius is ";
    temp = convert_celcius_to_farenheit(temp);
    cout << temp << " in farenheit";

}