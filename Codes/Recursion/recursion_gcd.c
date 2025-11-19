#include <stdio.h>

int gcd_rec(int a, int b)
{
    int x;

    if(b == 0)
    {
        return a;
    }
    
    printf("a = %d b = %d\n", a, b);
    
    return gcd_rec(b, a%b);
    
    
}

int gcd(int a, int b)
{
        int rem;

        while(b != 0) 
        {
                rem = a%b;
                a = b;
                b = rem;

                printf("a = %d b = %d rem = %d\n", a, b, rem);
        }
        return a;
}

int main() {

   int a = 45, b = 25, t, g;

   
   

   printf("GCD (Recursive) = %d\n", gcd_rec(a, b));

   //printf("GCD (Iterative) = %d\n", gcd(a, b));




   
   return 0;
}
