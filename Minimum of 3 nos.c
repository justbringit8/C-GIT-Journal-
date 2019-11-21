#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
            printf("%d is the smallest number\n\n",a);
        else
            printf("%d is the smallest number\n\n",c);
    }
    else
    {
        if(b<c)
            printf("%d is the smallest number\n\n",b);
    }
    return 0;
}
