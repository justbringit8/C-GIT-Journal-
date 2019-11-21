#include<stdio.h>
void exchange(int *num1,int *num2);
int main()
{
    int a=10,b=20;
    printf("\n a=%d and b=%d\n",a,b);
    exchange(&a,&b);
    printf("\n a=%d and b=%d\n",a,b);
}

void exchange(int *num1,int *num2)
    {
        int t;
        t=*num1;
        *num1=*num2;
        *num2=t;
        return;
    }
