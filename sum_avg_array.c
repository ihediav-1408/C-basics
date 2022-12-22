#include <stdio.h>

int main()
{
    int n,i,sum=0;
    float avg=0.0;
    printf("Enter the number of elements of the array.");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\nThe sum of all elements of the array is %d.",sum);
    avg=sum/(n*1.0);
    printf("\nThe average of all elements of the array is %f.",avg);
    return 0;
}