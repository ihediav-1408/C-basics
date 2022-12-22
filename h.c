#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int len,i;
    printf("Enter full name.");
    scanf("%[^\n]",name);
    len=strlen(name);
    for(i=0;i<len;i++)
    {
        name[0]=name[0]-32;
        if(name[i]==' ')
        {
            if(name[i+1]>='a'&& name[i+1]<='z')
            {
                name[i+1]-=32;
            }
            else
            {
            }
        }
        else
        {
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}