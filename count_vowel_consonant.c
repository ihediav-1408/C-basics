#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int len,i,v=0,c=0;
    printf("Enter a string.");
    scanf("%[^\n]",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]=='a')||(str[i]=='A')||(str[i]=='e')||(str[i]=='E')||(str[i]=='i')||(str[i]=='I')||(str[i]=='o')||(str[i]=='O')||(str[i]=='u')||(str[i]=='U'))
        {
            v++;
        }
        else if((str[i]==' ')||(str[i]=='.'))
        {
        }
        else
        {
            c++;
        }
    }
    printf("The number of vowels in the string are %d",v);
    printf("The number of consonants in the string are %d",c);
    return 0;
}