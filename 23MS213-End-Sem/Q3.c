/*

Given the three sides of a triangle (no user input needed), write a program in C to
determine if it is Equilateral (all sides equal), Isosceles (two sides equal), or Scalene (all sides different).
However, before these checks, you must check if the sides can constitute a valid triangle (i.e., the sum
of any two sides must be greater than the third). Print appropriate messages.

*/
#include<stdio.h>
int main(){
	int side1, side2, side3; 
	printf("Give me your first side\n");
	scanf("%d", &side1);
	printf("Give me your second side\n");
	scanf("%d", &side2);
	printf("Give me your third side\n");
	scanf("%d", &side3);
	
	
	int sides[3] = {side1, side2, side3};
	// this is the triangle eligibility check
	if(sides[1] + sides[2] > sides[0]){
		if(sides[0] + sides[2] > sides[1]){
			if(sides[0] + sides[1] > sides[2]){
			}else{
				printf("Sum of first and second inputs is less than the third\n");
				return 0;
			}
		}else{
			printf("Sum of first and third inputs is less than the second\n");
				return 0;
		}
	}else{
		printf("Sum of second and third inputs is less than the first\n");
				return 0;
	}

	int equal = 1;
	for(int i = 0; i < 3; i++){
		if(sides[i] == sides[i + 1]){
			equal += 1;
		}
	}
	
	if(equal == 3){
		printf("Triangle is an equilateral triangle %d\n", equal);
	}else if(equal == 2){
		printf("Triangle is an isosceles triangle %d\n", equal);
	}else{
		printf("Triangle is an scalene triangle %d\n", equal);
	}
	
	
	return 0;
}
