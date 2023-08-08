#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number:");
	scanf("%d",&n);
	if (n%2==0)
	{
		printf("even%d",n);
	}
	else
	{
		printf("odd\t%d",n);
	}
	return 0;
}
