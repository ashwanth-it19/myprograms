#include<stdio.h>
void main()
{
	int n,a;
	long int b=1;
	printf("enter the number :");
	scanf("%d",&n);
	for(a=n;a>=1;a--)
	{
		b=b*a;
	}
	printf("factorial of %d is:%ld",n,b);
}
