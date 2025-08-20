// Write a program in C	programming language to take as input the base (b) and height (h) of a triangle and print the area on the terminal (formula: area = (½)*base*height).

#include<stdio.h>
int main(){
	float base, height;
	printf("This is the program to calculate the area of a triangle\n");
	printf("Give me a base of the triangle:\n");
	scanf("%f", &base);
	printf("Give me a height of the triangle:\n");
	scanf("%f", &height);
	
	printf("The area of the triangle for base = %f, height = %f is == %f\n", base, height, 0.5 * height * base);
	return 0; 
}
