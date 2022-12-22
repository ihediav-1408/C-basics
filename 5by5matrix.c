#include <stdio.h>

int main()
{
    int a[5][5];

int c,i,k,j;
c=3;
for(i=0;i<=3;i++)
{
    for(j=0;j<=c;j++)
    {
        a[i][j]=+1;
    }
    c--;
}
j=4;
for(i=0;i<=4;i++)
{
    a[i][j]=0;
    j--;
}
c=4;
for(i=1;i<=4;i++) 
{
    for(j=4;j>=c;j--)
    {
        a[i][j]=-1;
    }
    c--;
}
printf("The Resultant Array is:");
printf("\n");
for(i=0;i<=4;i++)
{
    for(j=0;j<=4;j++) 
    {
        printf("%d\t",a[i][j]);  
    } 
    printf("\n");
}
return 0;
}