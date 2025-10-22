/*Consider an integer array named marks containing the marks (out of 100) of five students. 
 Define a function grace_marks(), which takes an array of integers, along with the number of elements in the array, as arguments, and adds grace marks of 5 to those students who obtained less than 40. 
 Print the values of the array marks before and after passing the array to grace_marks().
 */
#include<stdio.h>

int grace_marks(int *a, int *length){
	for(int i = 0; i < (*length) ; i++){
		(*(a + (i * sizeof(i))) + 5);		
	}
}





int main(){
	int lengthOfArray = 0;
	int marks[5] = {12, 23, 34, 45, 56};
	printf("This is the array of the 5 students and their marks\n");

	lengthOfArray = sizeof(marks) / sizeof(marks[0]);
	printf("[");
	for(int i = 0; i < lengthOfArray; i++){
		printf("%d <- %ld ;", marks[i], (*marks)+ (i * (sizeof(marks[i]))));
	}
	printf("]\n");

	printf("This is the updated array after the implementation of the grace function\n");
	printf("[");

	grace_marks(marks, &lengthOfArray);

	for(int i = 0; i < lengthOfArray; i++){
		printf("%d <- %ld ;", marks[i], (*marks)+ (i * (sizeof(marks[i]))));
	}
	printf("]\n");


	return 0;
}






