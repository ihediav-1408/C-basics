#include <stdio.h>

struct distance{
    float km;
    float m;
};
int main()
{
    int i;
    struct distance d1,d2,d3;
    printf("\nEnter distance 1.");
    printf("\nEnter the kilometers.");
    scanf("%f",&d1.km);
    printf("Enter the meters.");
    scanf("%f",&d1.m);
    printf("\nEnter distance 2.");
    printf("\nEnter the kilometers.");
    scanf("%f",&d2.km);
    printf("Enter the meters.");
    scanf("%f",&d2.m);
    d3.km=d1.km+d2.km;
    d3.m=d1.m+d2.m;
    while(d3.m>=1000)
    {
        d3.km=d3.km+1;
        d3.m=d3.m-1000;
    }
    printf("The resultant distance is: %fkilometers and %fmeters.",d3.km,d3.m);
    return 0;
}
