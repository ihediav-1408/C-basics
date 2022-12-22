#include <stdio.h>

int main()
{
    int n,i,ele,mod,pos=0;
    printf("Enter the number of elements of the array.");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be modified in the array.");
    scanf("%d",&ele);
    printf("\nEnter the modified element.");
    scanf("%d",&mod);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            pos=i;
            break;
        }
    }
    a[pos]=mod;
    printf("\nThe new array is:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}