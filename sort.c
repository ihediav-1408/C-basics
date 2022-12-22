#include <stdio.h>
void sort(int a[100], int n);
int main()
{
  int i, n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements of the array: ");
  for (i=0; i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  sort(a,n);
  printf("Sorted array: ");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}
void sort(int a[100], int n)
{
  int i,j,t;
  for(i=0;i<(n-1);i++)
  {
      for(j=0;j<(n-1-i);j++)
      {
          if(a[j]>a[j+1])
          {
              t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
          }
      }
  }
}