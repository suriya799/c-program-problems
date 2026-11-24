// The distance between two cities (in km.) is input
//  through the keyboard. Write a program to convert
// and print this distance in meters, feet, inches and centimeters.
#include <stdio.h>
int main()
{
    int km, m, f, i, cm;
    printf("Distance between 2 cities:");
    scanf("%d", &km);
    m = km * 1000;
    f = km * 3281;
    i = km * 39370;
    cm = km * 100000;
    printf("\n distance between 2 cities in kilometer is:%d", km);
    printf("\n distance between 2 cities in meter is:%d", m);
    printf("\n distance between 2 cities in feet is:%d", f);
    printf("\n distance between 2 cities in inches is:%d", i);
    printf("\n distance between 2 cities in centimeter is:%d", cm);
}
