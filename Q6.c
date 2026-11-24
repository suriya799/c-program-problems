// Two numbers are input through
// the keyboard into two
// locations C and D. Write a program...

#include <stdio.h>
int main()
{

    int c, d, z;
    printf("Enter the numbers:");
    scanf("%d%d", &c, &d);
    printf("\nvalue of C:%d \nvalue of D:%d", c, d);
    z = c;
    c = d;
    d = z;
    printf("\nvalue of C:%d \nvalue of D:%d", c, d);
}
