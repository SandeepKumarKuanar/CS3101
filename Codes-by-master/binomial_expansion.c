#include <stdio.h>
#include<math.h>

int factorial(int n) //Calculates factorial
{
    int i, fact = 1;

    for(i = 2 ; i <= n ; i++)
    {
        fact = i*fact;
    }

    return fact;

}

float nCr(int n, int r) //Calculates nCr
{
    float comb;

    comb = factorial(n)/(1.0*factorial(r)*factorial(n-r));

    return comb;
}

float binomialExpansion(int a, int b, int n) //Calculates (a + b)^n using Binomial Expansion
{
    int r;
    float sum = 0;

    for(r = 0 ; r <= n ; r++)
    {
        sum += nCr(n, r)*pow(a, n-r)*pow(b, r);
    }

    return sum;
}

float powerOfSum(int a, int b, int n) //Explicitly calculates (a + b)^n 
{
    return (pow(a + b, n));
}
int main() {

   int a = 4, b = 6, n = 3, r;
   
   printf("Binomial expansion for (%d + %d)^%d = %f\n", a, b, n, binomialExpansion(a, b, n));

   printf("Explicit calculation for (%d + %d)^%d = %f\n", a, b, n, powerOfSum(a, b, n));

  




   
   return 0;
}
