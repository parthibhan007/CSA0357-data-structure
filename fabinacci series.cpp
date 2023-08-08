#include<stdio.h>
int main()
{
	int i,j,m1,m2,m3,m4,m5,n;
	printf("enter the number");
	scanf("%d",&n);
	m1=0;
	m2=1;
	while (n!=0)
	{
		printf("%d",m1);
		m3=m1+m2;
		m1=m2;
		m2=m3;
		n--;
	}
	return 0;
}
