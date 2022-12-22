#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int len,i;
    printf("Enter a string.");
    scanf("%[^\n]",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]=='a')||(str[i]=='A')||(str[i]=='e')||(str[i]=='E')||(str[i]=='i')||(str[i]=='I')||(str[i]=='o')||(str[i]=='O')||(str[i]=='u')||(str[i]=='U'))
        {
        }
        else if((str[i]==' ')||(str[i]=='.'))
        {
        }
        else
        {
            str[i]='O';
        }
    }
    printf("The new string is:");
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}