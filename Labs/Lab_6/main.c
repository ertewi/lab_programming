#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	int v = -1;
	while(v != 0){
		printf("Enter exercize number: ");
		scanf("%d", &v);
		
		
		switch(v)
		{	
			case 1: 
				task_1();
				break;
			case 2: 
				task_2();
				break;	
			case 3: 
				task_3();
				break;
			case 4:
				task_4();
				break;				
		}
	}
}


int random (int N) {
	return rand() % N;
}


int factorial(int i) {
	if (i == 0) return 1;
	else return i * factorial(i - 1);
}



int task_1 () {
	int A[20], i, a = -10, b = 10;
	for (i = 0; i < 20; i++){
		A[i] = random(b - a + 1) + a;
	}
	printf("Array:");
	for (i = 0; i < 20; i++) {
		printf(" %d", A[i]);
	} printf("\n");

	printf("Positive numbers: ");
	for (i = 0; i < 20; i++) {
		if (A[i] >= 0) {
			printf(" %d", A[i]);
		}
	} printf("\n");

	printf("Negative numbers: ");
	for (i = 0; i < 20; i++) {
		if (A[i] < 0) {
			printf(" %d", A[i]);
		}
	} printf("\n");
}
	

int task_2 () {
	int n = 10, i, a;
	printf("Enter N:");
	int C[100], *p;
	p = C;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		a = factorial(n) / (factorial(i) * factorial(n - i));
		C[i - 1] = a;
	}
	printf("Array:");
	for (i = 0; i < n; i++) {
		printf(" %d", *(p + i));
	}
	printf("\n");
}


int task_3 () {
	float A[20];
	int i;
	for (i = 0; i < 20; i++) {
		A[i] = (float)rand()*(10)/RAND_MAX;
	}
	printf("Array:");
	for (i = 0; i < 20; i++) {
		printf(" %.5f", A[i]);
	} printf("\n");
}


int task_4 () {
	int card[16], i, count, a, b;
	printf("Enter number of your credit card:");
	for (i = 0; i < 16; i++) {
		scanf("%d", &card[i]);
	}
	for (i = 0; i < 16; i++) {
		if (i % 2 == 0) {
			b = card[i] * 2;
			if (b > 9) b -= 9;
			count += b;
		} else {
			count += card[i];
		}
	}
	if (count % 10 == 0) {
		printf("Proceed...");
	} else printf("Wrong card");
	printf("\n");
}



