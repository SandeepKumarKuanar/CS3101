#include <stdio.h>
#include <string.h>

//////////////////////////////////
/*    Trivia on strcmp()

#include <string.h>

int strcmp(const char *s1, const char *s2);

strcmp() returns an integer indicating the result of the comparison, as
       follows:

       •  0, if the s1 and s2 are equal;

       •  a negative value if s1 is less than s2;

       •  a positive value if s1 is greater than s2.

*/
//////////////////////////////////


int main(void) {
    // Sorted lexicographically
    char *names[] = {
        "Anita", "Arjun", "Kabir", "Leela", "Meera",
        "Neha", "Priya", "Rahul", "Sumit", "Zubin"
    };
    
    int n = 10;

    char key[128];
    
    printf("Enter name to search (exact match): ");
    
    scanf("%s", key);

    int lo = 0, hi = n - 1, index = -1;   // Binary Search
    
    while (lo <= hi) {
       
        int mid = (lo + hi)/2;
        int cmp = strcmp(key, names[mid]);
        if (cmp == 0) //match
        { 
        	index = mid; 
        	break; 
        }
        else if (cmp < 0) 
        {
        	hi = mid - 1;
        }	
        else
        {
                lo = mid + 1;
        }        
    }

    if (index >= 0) 
    {
    	printf("Found \"%s\" at index %d\n", key, index);
    }	
    else 
    {           
    	printf("\"%s\" not found\n", key);
    }
    	
    return 0;
}
