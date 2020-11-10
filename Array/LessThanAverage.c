/*
 * Show how many array's values are smaller than the average of array's values
 */
 
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CONTROL 20 // Element of division in rand(). void creatArray(int size)

void creatArray(int size);
void showArray(int array[], int elements);
float calcAverage(int v[], int elements);
int lessValue(int v[], int elements, float reference);

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
	int count;
	
	for(int i = 0; i < size; i++){
		array1[i] = rand() % CONTROL;
	}
	
	printf("Array: \n");
	showArray(array1, size);
	printf("\n");
	average = calcAverage(array1, size);
	count = lessValue(array1, size, average);
	printf("\nThe array has %d values smaller than array's average (%.1f)\n\n", count, average);
	
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
int lessValue(int v[], int elements, float reference){
	int count = 0;
		
    for(int i = 0; i < elements; i++){
		if(v[i] < reference){
			printf(" (%d) ", v[i]);
			count++;
		}
	}
	
	return count;
}
/////////////////////////////////////////////////////////////////////


