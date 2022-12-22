#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    int power;
    printf("Enter the limit.");
    scanf("%d",&n);
    power=0;
    for(i=1;i<=n;i++)
    {
        power=pow(i,2);
        power=power-1;
        printf("%d\t",power);
    }
    return 0;
}