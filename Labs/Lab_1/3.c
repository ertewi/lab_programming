#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{
    float t, z, y, x;
    
    printf("Enter t, z:");
    scanf("%f %f", &t, &z);

    y = sin(t);
    x = (4 * y * y) / (4 * y * pow(M_E, z) - 2 * t * t * t);

    printf("%f ", x);
    system("PAUSE");
}