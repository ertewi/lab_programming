#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	while(1){
		int v;
		printf("Enter exercize number: ");
		scanf("%d", &v);
		
		
		switch(v)
		{	
			case 1: 
				zadanie_1();
				break;
			case 2: 
				zadanie_2();
				break;	
			case 3: 
				zadanie_3();
				break;					
		}
	}
}

int zadanie_1()
{
double Pi = 0;
unsigned long long i,n;
n = 1000000;

for (i=0;i<n;i++){
	
Pi+=(1.0/(1.0+2.0*i))*((i%2==0) ? 1:(-1));

}

Pi *= 4;
printf("Pi = %.5lf\n",Pi);
return 0;
}
	
  


int zadanie_2(){
	float a = 2.14, b= -4.21, c = 3.25, x= -4.5, xk= -13.5, h = 0.5, ymin, ymax, y;
	
	ymin, ymax = (a * pow(x,2) + b * x + c) * sin(x);
	
	while (x != xk){
		x = x - h;
		y = (a * pow(x,2) + b * x + c) * sin(x);
		
		if (ymin > y) 
			ymin = y;
	
		if (ymax < y) 
			ymax = y;
	}
	printf("Min = %f, max = %f\n", ymin, ymax);
}

int zadanie_3(){
	int n, count, i;
	printf("Enter number N: "); scanf("%d", &n);
	
	while (n >= 2) {
		i = 2;
		while (i < n) {
			if (n % i == 0) {
				goto point;
			} else {
				i++;
			}
		}
		count++;
		printf("%d \n", n);
		point:
		n -= 1;
	}
	printf("\nAll numbers: %d\n", count);
}


