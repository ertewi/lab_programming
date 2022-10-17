#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float x, t, z, y;

    printf("Enter y and z:");
    scanf("%f %f", &y, &z);

    t = 5 / (1 + (y * y));
    x = 2 * y + 3 * sinh(t) - z;

    printf("%f ", x);
    system("PAUSE");
}