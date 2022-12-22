#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a,b,temp;
    printf("Enter two numbers to be swapped.");
    scanf("%d%d",&a,&b);
    printf("The numbers before swapping are %d and %d.",a,b);
    swap(&a,&b);
    printf("The numbers after being swapped are: %d and %d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}