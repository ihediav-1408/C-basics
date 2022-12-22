#include <stdio.h>

int main()
{
    int n,i,ele,pos=0;
    printf("Enter the number of elements of the array.");
    scanf("%d",&n);
    int a[n+1];
    printf("\nEnter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be entered in the array.");
    scanf("%d",&ele);
    printf("Enter the position.");
    scanf("%d",&pos);
    for(i=n-1;i>=(pos-1);i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    printf("\nThe new array is:");
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}