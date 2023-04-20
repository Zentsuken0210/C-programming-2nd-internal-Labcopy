#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], n, i, j, k;
    printf("Enter the value of N (N<=10): ");
    scanf("%d", &n);
    printf("\n Enter the element of Matrix-A: ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", & a[i][j]);
        }
        
    }
    printf("\n Enter the elements of Matrix-B: ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", & b[i][j]);
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for ( k = 0; k < n; k++)
            {
                c[i][j]+=a[i][k]*b[k][i];
            }
            
        }
        
    }
    printf("\n The product of two Matrices is: ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
    
    
    
}