#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int len,i;
    printf("Enter a string.");
    scanf("%[^\n]",str);
    len=strlen(str);
    printf("The length of the string is %d",len);
    return 0;
}