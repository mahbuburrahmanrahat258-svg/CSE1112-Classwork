#include <stdio.h>

int main()
{
    float side, area;

    printf("Enter side: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of Square = %f", area);

    return 0;
}
