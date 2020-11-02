/*
 * Show the multipliation's result between two arrays. This function must fill two arrays, x and
 * y, with keyboard's data.
 * Eg.:
 * x = (1,2,3,4) y=(4,3,2,1) -> x.y = 1.4 + 2.3 + 3.2 + 4.1 = 20
 */

#include <stdio.h>

#define SIZE 4
int calcMultipli(int array1[], int array2[]);

int main(void){
	int v1[SIZE];
	int v2[SIZE];
	int result = 0;
	int i = 0;
	
	for(; i < SIZE; i++){
		printf("Enter the value of first array: ");
		scanf("%i", &v1[i]);
	}
	
	printf("\n");
	i = 0;
	for(; i < SIZE; i++){
		printf("Enter the value of second array: ");
		scanf("%i", &v2[i]);
	}
	
	result = calcMultipli(v1, v2);
	printf("\nThe result is %i\n", result);
	
	return 0;
}

int calcMultipli(int array1[], int array2[]){
	
	int result = 0;
	
	for(int i = 0;i < SIZE; i++){
		result+=array1[i] * array2[i];
	}
		
	return result;
}
