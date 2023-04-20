#include<stdio.h>
int main()
{
    int a[5], i;
    printf("Enter five numbers: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n The array contains: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
    
    
}