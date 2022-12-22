#include <stdio.h>

int main()
{
    int n,i,ele,pos=0;
    printf("Enter the number of elements of the array.");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be deleted in the array.");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
        }
        else
        {
            printf("\n%d",a[i]);
        }
    }
    return 0;
}