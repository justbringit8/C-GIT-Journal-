#include<stdio.h>
int main()
{
    char u,l;
    printf("Enter the character: ");
    scanf("%c", &u);
    l=(int)u-32;
    printf("\n The Uppercase of %c is %c \n \n",u,l);
    return 0;
}

