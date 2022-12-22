#include <stdio.h>
#include <string.h>
void concat(char[],char[]);
int main()
{
  char str1[100],str2[100];
  printf("Enter string 1.");
  gets(str1);
  printf("Enter string 2.");
  gets(str2);
  concat(str1,str2);
  return 0;
}
void concat(char a[],char b[])
{
  int i,j=0;
  char c[200];
  for(i=0;i<strlen(a);i++)
  {
    c[j]=a[i];
    j++;
  }
  for(i=0;i<strlen(b);i++)
  {
    c[j]=b[i];
    j++;
  }
  c[j]='\0';
  printf("%s",c);
}