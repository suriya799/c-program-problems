// If a five-digit number is input
//  through the keyboard,
// write a program to reverse the number.

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, z, x, y, u, v, result;
    printf("Enter the 5 digit number:");
    scanf("%d", &a);
    z = a % 10;
    b = a / 10;
    printf("\n%d", z);
    x = b % 10;
    c = b / 10;
    printf("\n%d", x);
    y = c % 10;
    d = c / 10;
    printf("\n%d", y);
    u = d % 10;
    e = d / 10;
    printf("\n%d", u);
    v = e % 10;
    f = e / 10;
    printf("\n%d", v);
    result = (z * 10000) + (x * 1000) + (y * 100) + (u * 10) + v;
    printf("\nThe reversed number is %d", result);
}
