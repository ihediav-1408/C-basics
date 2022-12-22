#include <stdio.h>

int main()
{
    int a,b,*x,*y,sum=0;
    printf("Enter two numbers.");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    sum=*x+*y;
    printf("The sum of two numbers is %d.",sum);
    return 0;
}