#include <stdio.h>
int max(int a[100],int n);
int main()
{
    int n,i;
    printf("Enter the number of elements in the array.");
    scanf("%d",&n);
	int a[n];
    printf("Enter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	int m;
	m=max(a,n);
	printf("\nThe largest number is: %d",m);
    return 0;
}
int max(int a[100],int n)
{
	int t=0,i;
	for(i=0;i<n;i++)
    {
		if(a[i]>t)
        {
            t=a[i];
        }
	}
	return(t);
}