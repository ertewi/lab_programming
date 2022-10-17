#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{   float x,y1,y2,y3,max;
    printf("Input x ");   scanf("%f",&x);
    y1=x*x+1; y2=7-x*x;  y3=x+1;
   max= y1>y2&&y1>y3 ? y1 : y2>y3 ? y2 : y3;
   printf ("x=%8.2f y1=%8.2f  y2=%8.2f  y3=%8.2f  max=%8.2f\n",x,y1,y2,y3,max); 
   system("PAUSE");
   return EXIT_SUCCESS;
}