#include<stdio.h>
int binary(int arr[],int l,int h,int x)
{
	int mid=l+(h-l)/2;
	if (h>=l)
{
	if (arr[mid]==x)
	{
		return mid;
	}
	if(arr[mid]<x)
	{
		return binary(arr,mid+1,h,x);
	}
	if(arr[mid]>x)
	{
		return binary(arr,0,mid-1,x);
	}
}
return -1;
}
int main()
{
	int n,x;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched:");
	scanf("%d",&x);
	int result=binary(arr,0,n-1,x);
	if (result==-1)
	{
		printf("\nThe Element is not present\n");
	}
	else
	{
		printf("\nThe element is presnt in the INDEX %d",result);
	}
}
