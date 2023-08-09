#include<stdio.h>
int linear(int a[],int x,int n)
{
	for (int i=0;i<n;i++)
	{
		if (a[i]==x)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int i,j,n,x;
	printf("Enter the number of element in the arry:");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the element :");
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&x);
	int p=linear(a,x,n);
	if (p==-1)
	{
		printf("The Given element is not present the arry%d",x);
	}
	else
	{
		printf("The search element index are%d",p);
	}
	return 0;
}
