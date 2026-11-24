//if total selling price of 15 items and totla profit earned om them is input 
//input through keyboard write the programe to find the cost of one item

#include<stdio.h>
int main()
{
    float s,p,c;
    printf("Enter the selling price of 15 items: ");
    scanf("%f",&s);
    printf("\nEnter the total profit:");
    scanf("%f",&p);
    c=(s-p)/15;
    printf("\nthe cost price of single item is: %0.2f",c);


}