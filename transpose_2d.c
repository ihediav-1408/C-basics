#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the order of the matrix.");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("\nEnter the elements of the matrix.");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("\nOriginal Matrix:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposed Matrix:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}