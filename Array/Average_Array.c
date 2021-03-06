/*
 * Show the average of array's values
 */
 
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CONTROL 20 // Element of division in rand(). void creatArray(int size)

void creatArray(int size);
void showArray(int array[], int elements);
float calcAverage(int v[], int elements);

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
	float average;
	
	for(int i = 0; i < size; i++){
		array1[i] = rand()%CONTROL;
	}
	
	printf("Array: \n");
	showArray(array1, size);
	printf("\n");
	average = calcAverage(array1, size);
	printf("The array's value average is %.1f\n", average);
	
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
float calcAverage(int v[], int elements){
	int accum = 0;
	
    for(int i = 0; i < elements; i++){
		accum += v[i];
	}
	
	return (float)accum / elements;
}
/////////////////////////////////////////////////////////////////////

