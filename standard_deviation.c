#include <math.h>
#include <stdio.h>

int main() 
{
    int i,n,sum=0;
    float mean=0.0,sd=0.0;
    printf("Enter the number of elements in the array.");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array.");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) 
    {
        sum+=a[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++) 
    {
        sd=sd+pow(a[i]-mean,2);
    }
    sd=sqrt(sd/n);
    printf("The standard deviation of %d elements is %f.",n,sd);
    return 0;
}