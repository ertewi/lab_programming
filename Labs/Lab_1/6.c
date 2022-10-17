#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{
    float t, z, y, x;
    
    printf("Enter z, t:");
    scanf("%f %f", &z, &t);

    y = tan(t) + z;
    x = (8 * z * z + 1) / (y * pow(M_E, t) + (t * t));

    printf("%f ", x);
    system("PAUSE");
}