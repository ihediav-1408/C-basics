#include <stdio.h>
int sum(int,int);
int main()
{
    int a,b,c;
    printf("Enter two numbers.");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("The addition of two numbers is %d.",c);
    return 0;
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}