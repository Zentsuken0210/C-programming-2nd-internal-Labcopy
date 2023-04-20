#include<stdio.h>
int main(void)
{
	int x,y,rem,prod;
	printf("\n Enter the value:");
	scanf("%d %d",&x,&y);
	if(x<y)
	{
		x=x+y;
		y=x-y;
		x=x-y;
	}
	prod=x*y;
	rem=x%y;
	while(rem!=0)
	{
		x=y;
		y=rem;
		rem=x%y;
	}
	printf("\n Desired HCF=%d",y);
	printf("\n Desired LCM=%d",prod/y);
}