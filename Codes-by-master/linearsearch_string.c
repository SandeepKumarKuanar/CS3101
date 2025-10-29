#include <stdio.h>
#include <string.h>

int main(void) {
    char *names[] = {
        "Anita", "Rahul", "Priya", "Zubin", "Meera",
        "Kabir", "Arjun", "Leela", "Neha", "Sumit"
    };
    

    char key[128];
    printf("Enter name to search (exact match): ");
    
    scanf("%s", key);

    int index = -1;                // Linear Search
    for (int i = 0; i < 10; i++) {
    
        if (strcmp(names[i], key) == 0) //match
        { 
        	index = i; 
        	break; 
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

