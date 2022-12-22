#include<stdio.h>

int main()
{
int arr[100],n,i,sum=0;
int *ptr=arr;
printf("Enter the number of elements of the array.");
scanf("%d",&n);
printf("\nEnter the elements of the array");
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
sum+=*ptr;
*ptr++;
}
printf("\nSum = %d",sum);
return 0;
}