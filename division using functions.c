#include<stdio.h>

void division(int a, int b,int *q, int *r);
int main()

{
    int dvd,dvs;
    int quo,rem;
    printf("\n Enter any 2 numbers:");
    scanf("%d %d", &dvd,&dvs);
    division(dvd,dvs,&quo,&rem);
    printf("\n Remainder: %d", rem);
    printf("\n Quotient: %d\n\n\n\n\n\n\n\n\n\n\n\n", quo);
    return 0;
}

void division(int a, int b, int *q, int *r)

{
    *q=a/b;
    *r=a%b;
    return;
}
