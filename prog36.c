#include<stdio.h>
int main()
{
    int a;
    printf("Enter a character or number: ");
    scanf("%d",&a);
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
    {
        printf("%c is alphabet.", a);
    }
    else if (a>='0'&&a<='9')
    {
        printf("%d is number.",a);
    }
    else
   {
	printf("%c is a character",a);
   }
}
