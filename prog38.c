#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the range start and end :");
	scanf("%d %d",&a,&b);
	for(c=a+1;c<b;c++)
	{
		printf("%d",c);
	}
}
