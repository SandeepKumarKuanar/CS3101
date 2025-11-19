/*
Given two vectors (of any dimension), write your own function dot() taking these two vectors as
arguments and returning the dot product of the same, store in your own header file myheader.h,
and call the same from main
*/

#include <stdio.h>
#include "myheader.h"


int main()
{	
	// required that for DOT product, the 2 vectors must have equal sizes
    int vector1[] = {5, 6};
    int vector2[] = {5, 6};
    printf("Dot product = %d\n", dot(vector1, vector2, sizeof(vector1)/sizeof(int)));
	return 0;
}
