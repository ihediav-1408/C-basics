#include<stdio.h>
void maxmin(int a[], int n, int *p, int *q)
{
    *p=0;
    for(int i=0; i<n; i++)
    {
       if(*p<a[i])
       {
           *p=a[i];
       }
       *q=*p;
    }
    for(int i=0; i<n; i++)
    {
       if(*q>a[i])
       {
           *q=a[i];
       }
    }  
}
int main()
{
    int n;
    printf("Enter range of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array : \n");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    int max, min;
    maxmin(a,n,&max,&min);
    printf("Maximum : %d Minimum : %d",max,min);
    return 0;
}