#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   float a,b;
   float res;
   int res1;
   unsigned char c;
   printf("\n\n **WELCOME** \n\n");
   printf("Enter any two numbers: ");
   scanf("%f%f",&a,&b);
   printf("\nSelect the Operation to be performed (+,-,/,*): ");
   c=getche();
   if(c=='+')
    {
     res=a+b;
     printf("\n\nThe sum of %.2f and %.2f is %.2f\n\n",a,b,res);
    }
    else if(c=='-')
    {
       res=a-b;
       printf("\nThe difference of %.2f and %.2f is %.2f\n\n",a,b,res);
    }
    else if(c=='*')
    {
       res=a*b;
       printf("\nThe product of %.2f and %.2f is %.2f\n\n",a,b,res);
    }
    else if(c=='/')
    {
       res=a/b;
       res1= (int )a% (int )b;
       printf("\n\nThe quotient %.2f\n\n",res);
       printf("\nThe remainder %d\n\n",res1);
    }
    return 0;
}
