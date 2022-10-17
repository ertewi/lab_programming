#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{
    float t, z, y, x;
    
    printf("Enter t, z:");
    scanf("%f %f", &t, &z);

    y = cos(t + z);
    x = 4 * log(pow(y, 3)) - z / t;

    printf("%f ", x);
    system("PAUSE");
}