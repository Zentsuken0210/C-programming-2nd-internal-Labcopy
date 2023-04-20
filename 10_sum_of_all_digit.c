#include<stdio.h>
int main(void)
{
	int number,sum=0,rem;
	printf("\n Enter the number:");
	scanf("%d",&number);
	while(number>0)
	{
		rem=number%10;
		sum=sum+rem;
		number=number/10;
	}
		printf("\n Desired the sum=%d",sum);
}