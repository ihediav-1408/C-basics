#include <stdio.h>

int main()
{
    int n,i,ele,f=0;
    printf("Enter the number of elements of the array.");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be checked.");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            f++;
        }
    }
    printf("\nThe frequency of the given element in the array is %d.",f);
    return 0;
}
