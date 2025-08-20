/*Write a program in C programming language to take as input the radius (R) and height (H) of a cone and print the volume on the terminal (formula: volume = PI*r*r*(h/3)).*/

#include<stdio.h>

#define PI 3.14159

int main(){
	float r, h, volume;
	printf("This is the program to calculate Volume\n");
	printf("Give me a radius:\n");
	scanf("%f", &r);
	printf("Give me a height:\n");
	scanf("%f", &h);
	volume = PI * r * r * ( h / 3);
	printf("Then this is the volume == %f \n", volume);
	return 0; 
}

