#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{
    float t, z, y, x;
    
    printf("Enter t, z:");
    scanf("%f %f", &t, &z);

    y = t + 2 * (1 / tan(z));
    x = (3 * y * y) / (4 * tan(z) - 2 * t * t);

    printf("%f ", x);
    system("PAUSE");
}