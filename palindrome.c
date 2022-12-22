#include <stdio.h>
int palin(int);
int main()
{
    int n,c;
    printf("Enter a number.");
    scanf("%d",&n);
    c=palin(n);
    if(c==1)
    {
        printf("It is a palindrome number.");
    }
    else if(c==0)
    {
        printf("It is not a palindrome number.");
    }
    else
    {
    }
    return 0;
}
int palin(int x)
{
    int s=0,a,r=x;
    while(r!=0)
    {
        a=r%10;
        s=(s*10)+a;
        r=r/10;
    }
    if(s==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}