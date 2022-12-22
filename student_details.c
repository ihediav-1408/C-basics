#include <stdio.h>
#include <string.h>

struct student{
    char name[10];
    int roll;
    float marks;
};
int main()
{
    int i;
    struct student s[10];
    printf("\nEnter details.");
    for(i=0;i<10;i++)
    {
        printf("\nEnter the name of the student.");
        scanf("%s",s[i].name);
        printf("Enter the roll number of the student.");
        scanf("%d",&s[i].roll);
        printf("Enter the marks of the student.");
        scanf("%f",&s[i].marks);
    }
    printf("Student Information:");
    for(i=0;i<10;i++)
    {
        printf("\nName: %s",s[i].name);
        printf("\nRoll number: %d",s[i].roll);
        printf("\nMarks: %f",s[i].marks);
    }
    return 0;
}
