#include<stdio.h>
#include<math.h>
int main(void){
	int n, i=1, sum=0;
	printf("\n enter a value:");
	scanf("%d" , &n);
	while(i<=n){
		sum=sum+pow(i,2);
		i=i+2;
	}
	printf("\n The sum =%d" , sum);
}