// Write a program in C programming language to take a number as input from the user and print its square on the terminal.

#include<stdio.h>
int main(){
	// assuming that number being a decimal
	float num;
	printf("Give me a number:\n");
	scanf("%f", &num);
	printf("This is the number you gave me squared %f\n", num * num);
	return 0; 
}
