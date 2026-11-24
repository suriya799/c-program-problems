// Ramesh’s basic salary is input through the
// keyboard. His dearness allowance is 40% of basic salary
//, and house rent allowance is 20% of basic salary.
// Write a program to calculate his gross salary.

#include <stdio.h>
int main()
{
    int bs, da, hra, gs;

    printf("Enter your basic salary:");
    scanf("%d", &bs);
    da = bs * 0.4;
    hra = bs * 0.2;
    gs = bs + da + hra;
    printf("\n gross salary :%d", gs);
    printf("\n basic salary :%d", bs);
    printf("\n dearness allowance :%d", da);
    printf("\n house rent allowance :%d", hra);
}
