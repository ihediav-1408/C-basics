#include <stdio.h>
struct distance{
    float feet;
    float inch;
};
int main()
{
    struct distance d1,d2,*x,*y,sum;
    x=&d1;
    y=&d2;
    printf("\nEnter distance 1:");
    printf("\nEnter feet:");
    scanf("%f",&x->feet);
    printf("\nEnter inch:");
    scanf("%f",&x->inch);
    printf("\nEnter distance 2:");
    printf("\nEnter feet:");
    scanf("%f",&y->feet);
    printf("\nEnter inch:");
    scanf("%f",&y->inch);
    sum.feet=x->feet+y->feet;
    sum.inch=x->inch+y->inch;
    if(sum.inch>=12.0)
    {
        sum.feet++;
        sum.inch=sum.inch-12.0;
    }
    printf("The sum of the distances is %ffeet and %finches.",sum.feet,sum.inch);
    return 0;
}
