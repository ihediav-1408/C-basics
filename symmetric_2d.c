#include <stdio.h>

int main()
{
    int n,i,j,c=1;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]!=b[i][j])
           {
               c++;
               break;
           }
        }
    }
    if(c==1)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("Not a Symmetric matrix.");
    }
    return 0;
}