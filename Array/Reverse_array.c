/*
 * Show received array in reverse order
 */
 
#include <stdio.h>

void reverseArray(int array[], int size);
 
int main(void){
	int v1[5];
	int size;
	for(int i = 0; i < 5; i++){
		printf("Enter the array's value: ");
		scanf("%i", &v1[i]);
	} 
	
	size = (sizeof(v1)) / (sizeof(v1)[0]);
	reverseArray(v1, size);
	 
	return 0;
}

void reverseArray(int array[], int size){
	
	printf("Original array\n[");
	
	for(int i = 0; i < size; i++){
		if(i == size - 1){
			printf("%d]", array[i]);
		}else printf("%d, ", array[i]);
	} 
	
	printf("\nArray in reverse mode\n[");
	
	for(int i = size-1 ; i >= 0; i--){
		if(i == (0)){
			printf("%d]", array[i]);
		}else printf("%d, ", array[i]);
	} 
	return;
}
