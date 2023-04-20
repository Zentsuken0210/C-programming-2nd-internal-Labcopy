#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("\n Enter the numbers:-");
	scanf("%d %d" , &a ,&b);
	(a>b)? printf("\n %d is the greater" , a) : printf("\n %d is greater" , b);
}