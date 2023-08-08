#include<stdio.h>
int main()
{
	int i,j,k;
	int n;
	printf("enter the number matrix :");
	scanf("%d",&n);
	int a[n][n];
	int b[n][n];
	int c[n][n];
	printf("\nenter the 1st matrix:");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("\n enter the number");
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\nEnter the 2nd matrix");
	for (i=0;i<n;i++)
	{
		for  (j=0;j<n;j++)
		{
			printf("\nEnter the number");
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			c[i][j]=0;
			for (k=0;k<n;k++)
			{
			c[i][j]+=a[i][k]*b[k][j];
		    }
			
		}
	}
	for (i=0;i<n;i++)
	{
		printf("\n");
		for (j=0;j<n;j++)
		{
		printf("%d\t",c[i][j]);
	}
	}
	return 0;
}
