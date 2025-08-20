/*Write a program in C	programming language to take the principal amount (P), time in years (T), and rate of interest (R) as input and print the Simple Interest (SI) and the Total Amount (A) on the terminal (formula: SI = (P*T*R)/100, A = P + SI).*/
#include<stdio.h>
int main(){
	float P, T, R, SI, A;
	printf("This is the program to calculate Total amount after Simple interest\n");
	printf("Give me a principle amount:\n");
	scanf("%f", &P);
	printf("Give me time in years:\n");
	scanf("%f", &T);
	printf("Give me a rate of interest:\n");
	scanf("%f", &R);
	SI = (P*T*R)/100;
	A = P + SI;
	printf("This is the simple interest:\n %f \n", SI);
	printf("This is the total amount:\n %f \n", A);
	return 0; 
}
