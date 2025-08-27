/*

Identify the issue in the following code and resolve it, ensuring none of the existing variables are removed and no line is commented out.

*/

#include <stdio.h>

int main() {
    
    int x = 10;
    int y = 20;	
    {//Block 1
    	
        {//Block2 
        	int x = 99;
        
        	printf("Sum1: %d\n", x + y);
        }	
        
        printf("Sum2: %d\n", x + y);
    } 

   printf("Sum3: %d\n", x + y);

    return 0;
}
