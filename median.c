#include <stdio.h>

int main()
{
    int n,i,j,ele;
    float median=0.0;
    printf("Enter the number of elements of the array.");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
               ele=a[j];
               a[j]=a[j+1];
               a[j+1]=ele;
            }
        }
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    if(n%2==0)
    {
        median=(a[(n-1)/2]+a[n/2])/2.0;
    }
    else
    {
        median=a[(n-1)/2];
    }
    printf("The median is %f.",median);
    return 0;
}