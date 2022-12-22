#include <stdio.h>

struct complex{
    float real;
    float img;
};
int main()
{
    int i;
    struct complex c1,c2,c3;
    printf("\nEnter complex number 1.");
    printf("\nEnter the real part.");
    scanf("%f",&c1.real);
    printf("Enter the imaginary part.");
    scanf("%f",&c1.img);
    printf("\nEnter complex number 2.");
    printf("\nEnter the real part.");
    scanf("%f",&c2.real);
    printf("Enter the imaginary part.");
    scanf("%f",&c2.img);
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    printf("The resultant number is: %f+i%f",c3.real,c3.img);
    return 0;
}
