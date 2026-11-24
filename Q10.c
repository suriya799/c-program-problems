// In a town, the percentage of men is 52.
//  The percentage of total literacy is 48.
//  If total percentage of literate men is
// 35 of the total population, write a
// program to find the total number
// of illiterate men and women if
// the population of the town is 80,000.

#include <stdio.h>
int main()
{
    int total, mens, Tliteracy, mliterate, fliterate, womens, im, iw;
    total = 80000;
    mens = 80000 * 52 / 100;
    Tliteracy = 80000 * 48 / 100;
    mliterate = 80000 * 35 / 100;
    womens = total - mens;
    fliterate = Tliteracy - mliterate;
    im = mens - mliterate;
    iw = womens - fliterate;
    printf("\nThe total number of men: %d", mens);
    printf("\nThe total number of women: %d", womens);
    printf("\nThe total number of literate men: %d", mliterate);
    printf("\nThe total number of literate women: %d", fliterate);
    printf("\nThe total number of literate: %d", Tliteracy);
    printf("\nThe total number of illiterate men: %d", im);
    printf("\nThe total number of illiterate women: %d", iw);
}
