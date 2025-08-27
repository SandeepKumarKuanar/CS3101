/*

Write a program in C to calculate the Gravitation Force (F) between two objects of masses M1 and M2 (Formula: F = (G*M1*M2)/(R*R), G = 6.673 x 10-11, R is the distance between the two centres of masses of the two objects) such that G is ii) local variable

*/

#include<stdio.h>

int main(){
	float G = 6.673e-11;
	float M1;
	printf("Input the mass 1 value\n");
	scanf("%f", &M1);
	float M2;
	printf("Input the mass 2 value\n");
	scanf("%f", &M2);
	float R;
	printf("Input the radius's value\n");
	scanf("%f", &R);
	printf("%f\n", G * M1 * M2 / R * R);
	return 0;
}
