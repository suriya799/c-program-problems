// The length & breadth of a rectangle and
// radius of a circle are input through
// the keyboard. Write a program to
//  calculate the area & perimeter of
//  the rectangle, and the area & circumference of the circle.

#include <stdio.h>
int main()
{

    float l, b, r, a, p, A, c;
    printf("Enter the length and breath of rectangle:");
    scanf("%f%f", &l, &b);
    printf("Enter the radius of the circle:");
    scanf("%f", &r);
    a = l * b;
    p = 2 * (l + b);
    A = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("The area and permeter of the rectangle is %0.2f\n%0.2f", a, p);
    printf("\nThe area and circumference of the circle is %0.2f\n%0.2f", A, c);
}
