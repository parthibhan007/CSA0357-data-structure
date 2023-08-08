#include<stdio.h>
int fact(int n)
{
	int x=1;
	int i;
	for (i=1;i<=n;i++)
	{
		x*=i;
	}
	return x;
}


int main()
{
	int i,j,n,m,x=1;
	{
	printf("enter the number");
	scanf("%d",&n);
}
	m=fact(n);
	printf("%d",m);
	return 0;
}

