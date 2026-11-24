// Temperature of a city in Fahrenheit degrees
//  is input through the keyboard.
// Write a program to convert this
//  temperature into Centigrade degrees.

#include <stdio.h>
int main()
{

    float f, c;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9.0);
    printf("Temperature in degree: %f", c);
}
