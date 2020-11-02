/*
 * Capture the keyboard's values and store them in array
 */
 #include <stdio.h>
 
 int main(void){
	float vGrade[10];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Enter the grade number %i: ", i+1);
		scanf("%f", &vGrade[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("vGrade %i: %.1f\n", i, vGrade[i]);
	}
	printf("\n");
	 
	return 0;
}
