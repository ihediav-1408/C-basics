#include <stdio.h>

struct distance{
    float feet;
    float inches;
};
int main()
{
    int i;
    struct distance d1,d2,d3;
    printf("\nEnter distance 1.");
    printf("\nEnter the feet.");
    scanf("%f",&d1.feet);
    printf("Enter the inches.");
    scanf("%f",&d1.inches);
    printf("\nEnter distance 2.");
    printf("\nEnter the feet.");
    scanf("%f",&d2.feet);
    printf("Enter the inches.");
    scanf("%f",&d2.inches);
    d3.feet=d1.feet+d2.feet;
    d3.inches=d1.inches+d2.inches;
    while(d3.inches>=12)
    {
        d3.feet=d3.feet+1;
        d3.inches=d3.inches-12;
    }
    printf("The resultant distance is: %ffeet and %finches.",d3.feet,d3.inches);
    return 0;
}
