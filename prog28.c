// matrix multiplication
#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,row1,col1,row2,col2;\
	printf("enter the no.of rows and columnsof 1st matrix");
	scanf("%d %d",&row1,&col1);
	printf("enter the no.of rows and columnsof 2nd matrix");
        scanf("%d %d",&row2,&col2);
if(col1==row2)
{
	printf("enter the first matrix");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix");
        for(i=0;i<row2;i++)
        {
                for(j=0;j<col2;j++)
		{
                	scanf("%d",&b[i][j]);
		}
        }
	//process -multiplication 
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			for(k=0;k<col2;k++)
			{
				c[i][j]=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d",c[i][j]);
		}

	}
}
	else 
	{
		printf("alter the values col 1 and row 1 should be equal");
	}
}

