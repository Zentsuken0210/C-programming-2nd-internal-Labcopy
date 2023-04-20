#include<stdio.h>
int main()
{
    int number, sum=0, lastDigit, temp;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;

    while (temp!=0)
    {
        lastDigit = temp%10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        temp = temp/10;
    }

    if (sum == number)
    {
        printf("\n The Amstrong number is = %d", number);
    }
    else
        printf("\n %d is not an Amstrong number\n", number);

    return 0;
    
    
}