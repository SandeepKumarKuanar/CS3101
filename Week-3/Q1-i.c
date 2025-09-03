/*Write a program to print the absolute value of an integer (I), which is the negation of the 
integer I if I is negative, else it is the same as I. Apply both if-else and the conditional operator (?:). There is no need to take user input.
*/


#include<stdio.h>

int absoluteValue(int number){
	if(number < 0){return -1 * number;};
	return number;
}


int main(){
	int test1, test2;
	test1 = 19; // this is an already positive number 
	test2 = -18464; // this is a negative number
	printf("%d\n", absoluteValue(test1)); // shouldn't negate
	printf("%d\n", absoluteValue(test2)); // should negate
	return 0;
}
