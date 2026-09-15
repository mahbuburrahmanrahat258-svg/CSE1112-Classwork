#include <stdio.h>

int main()
{
    float a, b, h, area;

    printf("Enter parallel side a,b: ");
    scanf("%f %f", &a,&b);


    printf("Enter height: ");
    scanf("%f", &h);

    area = 0.5 * (a + b) * h;

    printf("Area of Trapezium = %.2f", area);

    return 0;
}
