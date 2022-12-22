#include <stdio.h>

int main()
{
    int n,i,j,ld=0,rd=0;
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
        ld+=a[i][i];
        rd+=a[i][n-1-i];
    }
    printf("The sum of the left diagonal is %d.",ld);
    printf("The sum of the right diagonal is %d.",rd);
    return 0;
}