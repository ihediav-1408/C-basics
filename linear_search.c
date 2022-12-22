#include <stdio.h>
int linearSearch(int arr[], int n, int key) 
{
  for(int i=0; i<n; i++) 
  {
    if(key == arr[i])
      return i;
  }
  return -1;
}
int main()
{
  int num,j;
  printf("Enter the number of elements in the array.");
  scanf("%d",&num);
  int array[num];
  printf("Enter the elements of the array.");
  for(j=0;j<num;j++)
  {
      scanf("%d",&array[j]);
  }
  int ele = 0;
  printf("Enter Search Element: ");
  scanf("%d", &ele);
  int index = linearSearch(array, num, ele);
  if(index == -1)
    printf("%d Not Found\n", ele);
  else
    printf("Found at position = %d\n", index+1);

  return 0;
}