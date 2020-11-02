/*
 * Show the highest value in an array
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CONTROL 20 // Element of division in rand()

int creatArray(int ve[], int size);
void showArray(int array[], int elements);
int showHighestValue(int v[], int size);

int main(void){
	int size;
	int highest;

	srand(time(NULL));
	
	printf("Enter the size of the array or 0 to exit the program: ");
	scanf("%d", &size);
	int a[size];
	while(size > 0){
		a[size] = creatArray(a, size);
		
		printf("[");
	
		for(int i = 0; i < size; i++){
			if(i == size-1){
				printf("%d]", a[i]);
			}else printf("%d, ", a[i]);
		} 

		highest = showHighestValue(a, size);
		printf("\nThe highest number is %d", highest);

		printf("\nEnter the size of the next array or 0 to exit the program: ");
		scanf("%d", &size);
	}
	
	return 0;
}

/////////////////////////////////////////////////////////////////////
///////////////////////////// FUNCTIONS /////////////////////////////
/////////////////////////////////////////////////////////////////////
int creatArray(int v[], int size){
		
	for(int i = 0; i < size; i++){
		v[i] = rand()%CONTROL;
	}
		
	return v[size];
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
int showHighestValue(int v[], int size){
	int hValue = -1;
	
	for(int i = 0; i < size; i++){
		if(v[i] > hValue){
			hValue = v[i];
		}
	}
	
	return hValue;
}
/////////////////////////////////////////////////////////////////////
