#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the order of the matrices.");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("\nEnter the elements of the matrix 1.");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of the matrix 2.");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nMatrix 1:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\nResultant Matrix:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}