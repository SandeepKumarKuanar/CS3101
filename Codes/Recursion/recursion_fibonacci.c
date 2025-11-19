#include <stdio.h>

void fib(int n) //Iterative version
{
    int f0 = 0, f1 = 1, f, i;

    printf("%d %d ", f0, f1);

    for(i = 2 ; i <= n; i++)
    {
        f = f0 + f1;
        printf("%d ", f);
        f0 = f1;
        f1 = f;
    }

    printf("\n");

    

}

int fib_recursive(int n) //Recursive version
{
    int x;

    if(n == 0)
    {
        return 0;

    }
    else
    {
        if(n == 1)
        {
            return 1;

        }
        else
        {
            
            x = fib_recursive(n-1) + fib_recursive(n - 2);
            
            

            return x;
        }
    }
    
    
}


int main() {

   int n = 4, i;

   printf("Recursive: \n");

   for(i = 0 ; i <= n ; i++)
   {
       printf("%d ", fib_recursive(i));
   }

   printf("\n");

   printf("Iterative: \n");

   fib(n);

   
   return 0;
}
