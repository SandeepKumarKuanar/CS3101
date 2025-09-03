/*

Write a program to print the floor and ceil of a real number without using ceil() and floor() functions of math.h (or any other in-built functions). E.g., for a number n = 55.5, floor(n) = 55.0 (i.e., the immediately previous integer) and ceil(n) = 56.0 i.e., the immediately next integer). There is no need to take user input.

*/


#include<stdio.h>

float ceilThis(float number){
	int self = number;
	float quotient = number / self - 1;
	float reminder = quotient * self;
	return number - reminder;
}

float floorThis(float number){
	int self = number;
	float quotient = number / self - 1;
	float reminder = quotient * self;
	/*if (reminder != 0){
		return number - reminder;
	}*/
	return number + 1 - reminder;
}

int main(){
	float test1, test2;
	test1 = ceilThis(55.5);
	test2 = floorThis(55.5);
	printf("%f\n", test1);
	printf("%f\n", test2);
	return 0;
}
