// If a four-digit number is input through the keyboard,
//  write a program to obtain the sum of the
// first and last digit of this number.

#include <stdio.h>
int main()
{
    int a, b, c, d, e, sum;
    printf("enter 4 digit number:");
    scanf("%d", &a);
    b = a % 10;
    c = a / 10;
    d = c / 10;
    e = d / 10;
    sum = b + e;
    printf("The sum of first and last digit of 4 digit number is %d:", sum);
}
