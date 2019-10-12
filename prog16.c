#include<stdio.h>
void main()
{
	int n,a,b=0;
	printf("enter an integer:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		b=b+a;
	}
	printf("%d",b);
}
