// AREA OF CIRCLE USING POINTERS
#include<stdio.h>
int main()
{
    double rad,area;
    double *ptrrad, *ptrarea;

    ptrrad=&rad;
    ptrarea=&area;

    printf("\n Enter the radius of the circle: ");
    scanf("%lf",ptrrad);

    *ptrarea= 3.14* (*ptrrad)*(*ptrrad);
    printf("\n The Address is %p and Area of the Circle is: %2.lf\n\n",ptrarea,*ptrarea);
}
