#include <stdio.h>

int main()
{
    int n,i,odd=0,eve=0;
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
        if(a[i]%2==0)
        {
            eve++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nThe number of even elements in the array is %d.",eve);
    printf("\nThe number of odd elements in the array is %d.",odd);
    return 0;
}