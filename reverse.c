#include <stdio.h>
void reverse(int a[100], int n);
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
  reverse(a,n);
  printf("Reserved array: ");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}
void reverse(int a[100], int n)
{
  int i, t;
  for(i=0;i<n/2;i++)
  {
    t = a[i];
    a[i] = a[n-1-i];
    a[n-1-i] = t;
  }
}