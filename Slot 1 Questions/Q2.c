/*Write a recursive function SqSum() to compute the squared sum of the first n integers (i.e., 1**2 + 2**2 + ... + n**2) and print the same, where n is given as input by the user and passed as an
argument to SqSum().*/

#include <stdio.h>

int SqSum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * n + SqSum(n - 1);
    }
}

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // calling the recursive function
    int result = SqSum(n);
    printf("The squared sum of the first %d integers is: %d\n", n, result);
    return 0;
}