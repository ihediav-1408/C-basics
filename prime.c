#include <stdio.h>
int prime(int);
int main()
{
    int n,c;
    printf("Enter a number.");
    scanf("%d",&n);
    c=prime(n);
    if(c==1)
    {
        printf("It is a prime number.");
    }
    else if(c==0)
    {
        printf("It is not a prime number.");
    }
    else
    {
    }
    return 0;
}
int prime(int x)
{
    int f=0,i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}