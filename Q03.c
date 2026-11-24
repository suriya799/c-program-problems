// If the marks obtained by a student in five
//  different subjects are input through the keyboard,
//  find out the aggregate marks and percentage marks
// obtained by the student.
// Assume that the maximum marks that can
//  be obtained by a student in each subject is 100

#include <stdio.h>
int main()
{
    int tam, eng, math, sci, soc, total, avg;
    printf("Enter obtained marks:");
    scanf("%d\n%d\n%d\n%d\n%d", &tam, &eng, &math, &sci, &soc);
    total = tam + eng + math + sci + soc;
    avg = total / 5;
    printf("aggregate marks:%d\n", total);
    printf("average marks:%d", avg);
}
