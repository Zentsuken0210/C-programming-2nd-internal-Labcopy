#include<stdio.h>
int main(){
	int num ,rem, reverse=0;
	printf("Enter a number:-");
	scanf("%d" , &num);
	printf("\n Original number=%d" , num);
	while(num!=0){
		rem=num%10;
		reverse=reverse*10+rem;
		num=num/10;
	}
	printf("\n The reversed number is %d" , reverse);
}