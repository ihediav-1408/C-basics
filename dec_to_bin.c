#include <stdio.h>

int main()
{
    int i=0,ele,c=0,j;
    int a[10]={0};
    printf("Enter the decimal number.");
    scanf("%d",&ele);
    for(i=0;ele!=0;i++)
    {
        if(ele%2==0)
        {
            a[i]=0;
        }
        else
        {
            a[i]=1;
        }
        ele=ele/2;
        c=i;
    }
    for(i=c;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}