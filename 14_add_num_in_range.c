#include<stdio.h>
int main()
{
	int a,b,i;
	long int sum=0;
	printf("Enter the range:");
	scanf("%d %d",&a,&b);
	printf("\n The Odd numbers that comes in the range between %d to %d                 \n",a,b);
	for(i=a;i<=b;i++)
	if(i%2==1)
	{
		sum=sum+i;
		printf("%d",i);
	}
	printf("\n\n The sum of the odd numbers between the range is %d",sum);
}