#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 58
#define S 15
#define P 20
#define M 40

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
// A[N] = a * x * x * sin(x) + b * x + c;
int task_1() {
	char temp;
    int i, j, count;
    float a = 2.14, b = -4.21, c = 3.25, x = -4.5, xk = -33.5, h = 0.5, result;
    float A[N];


	// calculate the value
    for(i = 0; x > xk && i < N; x -= h, i++) {

        A[i] = a * x * x * sin(x) + b * x + c;

    }



	// sort
	for(i = 0; i < N - 1; i++){
		for(j = N - 2; j >= i; j--) {
			if (A[j] < A[j + 1]) {
				temp = A[j + 1];
				A[j + 1] = A[j];
				A[j] = temp;
			}
		}
	}



	// output
    for(i = 0; i < N; i++){
        printf("%f \n", A[i]);
    }
	return 1;
}



int task_2(){
	int A[S], i, j;


	// generate random and first output
	srand(time(NULL));
	printf("Array: \n");
	for(i = 0; i < S; i++) {
		A[i] = rand()%10;
		printf("%d ", A[i]);
	}

	printf("\n");

	// create plurality
	printf("Plurality: \n");
	for(i = 0; i < S - 1; i++) {
		for(j = i+1; j < S; j++) {
			if(A[i] == A[j]) {
				A[j] = 11;
			}
		}
	}

	// plurality output
	for(i = 0; i < S; i++) {
		if(A[i] != 11) {
			printf("%d ", A[i]);
		}
	}

	printf("\n");
	return 1;
}



int task_3(){
	int i;
	float A[P], B[P], temp;

	// generate random and first output
	srand(time(NULL));
	printf("Array: \n");
	for(i = 0; i < P; i++) {
		temp = rand() % 20000;
		A[i] = temp / 1000 - 10;
		printf("%.3f ", A[i]);		
	}

	printf("\n Positive: \n");

	//take positive and create B and second output
	for(i = 0; i < P; i++) {
		if(A[i] >= 0) {
			B[i] = A[i];
			printf("%.3f ", B[i]);
		}
	}

	printf("\n");
	return 1;
}

int task_4(){
	int C[P], D[P], E[M], i, j, c = 0, d = 0, temp;

	// generate first random and first output
	printf("Array C: \n");
	for(i = 0; i < P; i++) {
		C[i] = rand()%20;
		printf("%d ", C[i]);
	} printf("\n");

	// generate second random and second output
	srand(time(NULL));
	printf("Array D: \n");
	for(i = 0; i < P; i++) {
		D[i] = rand()%20;
		printf("%d ", D[i]);
	}printf("\n");

	// sort C
	for(i = 0; i < P - 1; i++){
		for(j = P - 2; j >= i; j--) {
			if (C[j] > C[j + 1]) {
				temp = C[j + 1];
				C[j + 1] = C[j];
				C[j] = temp;
			}
		}
	}

	// sort D
	for(i = 0; i < P - 1; i++){
		for(j = P - 2; j >= i; j--) {
			if (D[j] > D[j + 1]) {
				temp = D[j + 1];
				D[j + 1] = D[j];
				D[j] = temp;
			}
		}
	}

	// integration
	for(i = 0; i < M; i++) {
		if((C[c] < D[d]) && (c < P)) {
			E[i] = C[c];
			c++;
		} else {
			E[i] = D[d];
			d++;
		}
	}

	// third output E
	printf("Array E:\n");
	for(i = 0; i < M; i++) {
		printf("%d ", E[i]);
	} printf("\n");

    return 1;
}