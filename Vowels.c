#include<stdio.h>
int main()
{
    char ch;
    printf("\n\nEnter the character: \n\n");
    scanf("%c", &ch);
    if((ch=='A')||(ch=='a')||(ch=='E')||(ch=='e')||(ch=='I')||(ch=='i')||(ch=='O')||(ch=='o')||(ch=='U')||(ch=='u'))
        printf("\n\nIt is a vowel\n\n");
    else
        printf("\n\nIt is not a vowel\n\n");
    return 0;
}

