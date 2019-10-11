#include<stdio.h>
void main()
{
	int a=1,b=100,c;
	printf("Odd numbers in the range %d and %d:",a,b);
	for(c=a;c<=b;c++)
	{
		if(c%2==1)
		printf("%d ",c);
	}
}
