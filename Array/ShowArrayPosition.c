/*
 * Receive an array and ask to user the number of position and show its value. Ends when the 
 * position is invalid.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CONTROL 20 // Element of division in rand()

int creatArray(int ve[], int size);
void showArray(int array[], int elements);
void showArrayPosition(int v[], int position, int size);

int main(void){
	int size;
	int position;

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
		
		printf("\n");
		
		printf("Enter the array's position: ");
		scanf("%i", &position);
		
		showArrayPosition(a, position, size);
		
		printf("\n");
		printf("Enter the size of the next array or 0 to exit the program: ");
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
void showArrayPosition(int ve[], int position, int size){
	int condition = ( (position < size ) && ( position >= 0) );
	
	while(condition){
		printf("a[%i] = %i\n", position, ve[position]);
		printf("Enter the next array's position: ");
		scanf("%i", &position);
		condition = ( (position < size ) && ( position >= 0) );
	}
		
	if(!condition){
		printf("Invalid position\n");
	}
		
	return;
}
/////////////////////////////////////////////////////////////////////
