#include <stdio.h>

struct time{
    int hr;
    int min;
    int sec;
};
int main()
{
    int i;
    struct time t1,t2,t3;
    printf("\nEnter Time 1.");
    printf("\nEnter the hours.");
    scanf("%d",&t1.hr);
    printf("Enter the minutes.");
    scanf("%d",&t1.min);
    printf("Enter the seconds.");
    scanf("%d",&t1.sec);
    printf("\nEnter Time 2.");
    printf("\nEnter the hours.");
    scanf("%d",&t2.hr);
    printf("Enter the minutes.");
    scanf("%d",&t2.min);
    printf("Enter the seconds.");
    scanf("%d",&t2.sec);
    t3.hr=t1.hr+t2.hr;
    t3.min=t1.min+t2.min;
    t3.sec=t1.sec+t2.sec;
    while(t3.sec>=60)
    {
        t3.min=t3.min+1;
        t3.sec=t3.sec-60;
    }
    while(t3.min>=60)
    {
        t3.hr=t3.hr+1;
        t3.min=t3.min-60;
    }
    printf("The resultant time is: %dhours, %dminutes and %dseconds.",t3.hr,t3.min,t3.sec);
    return 0;
}
