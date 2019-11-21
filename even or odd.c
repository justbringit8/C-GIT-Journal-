#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is Even!\n\n",a);
    else
        printf("%d is Odd!\n\n",a);
    return 0;
}
