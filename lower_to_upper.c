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
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&& str[i]<='z'))
        {
            if(str[i]>='a'&& str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
        else if ((str[i]==' ')||(str[i]=='.'))
        {
        }
        else
        {
            printf("It is not an alphabet string.");
            break;
        }
    }
    printf("The new string is:");
    for(i=0;i<len;i++)
    {
            printf("%c",str[i]);
    }
    return 0;
}