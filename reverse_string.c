#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],revstr[100];
    int len,i,j=0;
    printf("Enter a string.");
    scanf("%[^\n]",str);
    len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
        revstr[j]=str[i];
        j++;
    }
    printf("The original array is:");
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
    printf("The reversed array is:");
    for(j=0;j<len;j++)
    {
        printf("%c",revstr[j]);
    }
    return 0;
}