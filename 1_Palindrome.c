#include<stdio.h> 
int main()
{
	int num, rem, reverse=0, original; 
	printf("enter the number");
	scanf("%d",&num);
	printf("In Original Number = %d", num);
	original=num;
	while(num!=0)
	{
		rem = num%10;
		reverse=10*reverse + rem; 
		num = num/10;
	}

	printf("\n Reversed Number= %d",reverse); 
	if(original==reverse)
	{
		printf("\n\n Number is Palindrome");
	}
	else
	{	
		printf("\n\n Number is not Palindrome");
	}
}