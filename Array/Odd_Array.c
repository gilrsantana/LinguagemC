/*
 * How many odd numbers are there in an array
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CONTROL 20 // Element of division in rand(). void creatArray(int size)

void creatArray(int size);
void showArray(int array[], int elements);
int countOdd(int v[], int elements);

int main(void){
	int size;
	
	srand(time(NULL));
	
	printf("Enter the size of the array or 0 to exit the program: ");
	scanf("%d", &size);
	
	while(size > 0){
		creatArray(size);
		
		printf("Enter the size of the next array or 0 to exit the program: ");
		scanf("%d", &size);
	}
	
	return 0;
}

/////////////////////////////////////////////////////////////////////
///////////////////////////// FUNCTIONS /////////////////////////////
/////////////////////////////////////////////////////////////////////
void creatArray(int size){
	int array1[size];
	int odd;
	
	for(int i = 0; i < size; i++){
		array1[i] = rand()%CONTROL;
	}
	
	printf("Array: \n");
	showArray(array1, size);
	
	printf("\n");

	odd = countOdd(array1, size);
	
	printf("There are %d odd numbers.\n\n", odd);
	
	return;
}

/////////////////////////////////////////////////////////////////////
void showArray(int array[], int elements){
	
	printf("[");
	
	for(int i = 0; i < elements; i++){
		if(i == elements-1){
			printf("%d]", array[i]);
		}else printf("%d, ", array[i]);
	} 
	
	printf("\n");
	
	return;
}

/////////////////////////////////////////////////////////////////////
int countOdd(int v[], int elements){
	int count = 0;
	
    for(int i = 0; i < elements; i++){
		if(v[i]%2 == 1){
			count++;
		}
	}
	
	return count;
}
/////////////////////////////////////////////////////////////////////
