#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculateArea(int sideA, int sideB, int sideC)
{
    float area;
    float semiPerimeter;

    semiPerimeter = (sideA + sideB + sideC) / 2.0;
    area = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));
    return area;
}

int main()
{
    int sideA, sideB, sideC;
    printf("Please enter the lengths of the three sides: ");
    scanf("%d %d %d", &sideA, &sideB, &sideC);
    printf("The area of the equilateral triangle is: %.2f\n", calculateArea(sideA, sideB, sideC));

    return 0;
}
