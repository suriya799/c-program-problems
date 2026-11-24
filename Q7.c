// If a five-digit number is input
// through the keyboard, write a
// program to calculate the sum of
// its digits. (Hint: Use the modulus operator ‘%’)

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, z, x, y, u, v, sum;
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
    sum = z + x + y + u + v;
    printf("\n sum of each digits is:  %d", sum);
}
