#include <stdio.h>
int sum(int);
int main()
{
    int n,c;
    printf("Enter a number.");
    scanf("%d",&n);
    c=sum(n);
    printf("The sum of all digits is %d.",c);
    return 0;
}
int sum(int x)
{
    int s=0,a;
    while(x!=0)
    {
        a=x%10;
        s+=a;
        x=x/10;
    }
    return s;
}