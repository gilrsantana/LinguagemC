
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CONTROL 20 // Element of division in rand(). void creatArray(int size)

void creatArray(int size);
void showArray(int array[], int elements);
void sortArray(int sArray[], int elements);

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
	
	for(int i = 0; i < size; i++){
		array1[i] = rand()%CONTROL;
	}
	
	printf("Array: \n");
	showArray(array1, size);
	
	printf("\n");

	sortArray(array1, size);
	
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
void sortArray(int sArray[], int elements){
	int array2[elements];
    int first = 0;
    int last = elements - 1;
	int i = 0;
    
    while(i < elements){
		
		if(sArray[i] % 2 == 0){
			array2[first] = sArray[i];
			first++;
		} else {
			array2[last] = sArray[i];
			last--;
		}
		
		i++;
	}
	
	printf("Sorted by even and odd:\n");
	showArray(array2, elements);
	
	printf("\n");
	
	return;
}
/////////////////////////////////////////////////////////////////////
