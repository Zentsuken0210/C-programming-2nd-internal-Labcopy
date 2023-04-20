#include<stdio.h>
int main(void)
{
	int n,i=2,sum=0;
	printf("\n Enter the value:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("\n the sum=%d",sum);
}