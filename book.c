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
    int i,n;
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
    printf("Details of the books are as follows:");
    for(i=0;i<n;i++)
    {
        printf("\nBook %d",i+1);
        printf("\nName: %s",b[i].name);
        printf("\nAuthor: %s",b[i].author);
        printf("\nPublisher: %s",b[i].publisher);
        printf("\nEdition: %s",b[i].edition);
    }
    return 0;
}