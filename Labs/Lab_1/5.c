#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{
    float t, z, y, x;
    
    printf("Enter y, z:");
    scanf("%f %f", &y, &z);

    t = sin(2 + z);
    x = 6 * t * t - ((1 / tan(z)) + 1) / (y * y);

    printf("%f ", x);
    system("PAUSE");
}