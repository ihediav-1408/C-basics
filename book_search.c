#include <stdio.h>
#include <string.h>
struct BOOK{
    char name[50];
    char author[50];
    char publisher[50];
    char edition[50];
};
int main()
{
    int i,n,flag=0;
    char book[50];
    printf("Enter the number of books.");
    scanf("%d",&n);
    struct BOOK b[n];
    printf("\nEnter the details of all the books.");
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name of the book.");
        scanf("%s",b[i].name);
        printf("Enter the name of the author.");
        scanf("%s",b[i].author);
        printf("Enter the name of the publisher.");
        scanf("%s",b[i].publisher);
        printf("Enter the edition.");
        scanf("%s",b[i].edition);
    }
    printf("Enter the book to be searched.");
    scanf("%s",book);
    for(i=0;i<n;i++)
    {
        if(!(strcmp(b[i].name,book)))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Book Available.");
    }
    else
    {
        printf("Book not available.");
    }
    return 0;
}