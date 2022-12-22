#include <stdio.h>
int factorial(int);
int main()
{
    int n,c;
    printf("Enter a number.");
    scanf("%d",&n);
    c=factorial(n);
    printf("The factorial of the number is %d.",c);
    return 0;
}
int factorial(int x)
{
    int s=1,i;
    for(i=1;i<=x;i++)
    {
        s*=i;
    }
    return s;
}