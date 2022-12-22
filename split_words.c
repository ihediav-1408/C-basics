#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], word[10][10];
    int len,i,j,k;
    printf("Enter full name.");
    scanf("%[^\n]",name);
    len=strlen(name);
    j=0;
    k=0;
    for(i=0;i<len;i++)
    {
        if(name[i]==' '||name[i]=='\0')
        {
            word[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            word[k][j]=name[i];
            j++;
        }
    }
    printf("%s\n",word[k]);
    for(i=0;i<k;i++)
    {
        printf("%s\n",word[i]);
    }
    return 0;
}