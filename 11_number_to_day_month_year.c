#include<stdio.h>
int main(void)
{
	int num,year,mon,day;
	printf("\n Enter the number of day:");
	scanf("%d",&num);
	year=num/365;
	mon=(num-year*365)/30;
	day=(num-year*365-mon*30);
	printf("\n Years=%d",year);
	printf("\n Month=%d",mon);
	printf("\n Day=%d",day);
}