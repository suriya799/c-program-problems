// A cashier has currency notes of denominations
// 10, 50 and 100. If the amount to be withdrawn
//  is input through the keyboard in hundreds,
// find the total number of currency notes of
// each denomination the cashier will have to give to the withdrawer.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the total amount:");
    scanf("%d", &a);
    printf("\nRequired 100rs note : %d", (a / 100));
    printf("\nRequired 50rs note : %d", (a % 100) / 50);
    printf("\nRequired 10rs note : %d", ((a % 100) % 50) / 10);
    printf("\nremaining amount : %d rs", ((a % 100) % 50) % 10);
}
