/* 
Given two complex numbers (stored as arrays; real part as element 0, imaginary part as element 1), write your own function addComplex() to take these arrays as arguments and return the sum (sums of the real and imaginary parts separately), store in your own header file myheader.h and call the same from main. Both the real and imaginary parts are integers.
*/
#include <stdio.h>
#include "myheader.h"

int main(){
    int complex1[2] = {3, 2}; // 3 + 2i
    int complex2[2] = {1, 7}; // 1 + 7i
    int result[2];

    addComplex(complex1, complex2, result);
    printf("Sum: %d + %di\n", result[0], result[1]);
    return 0;
}