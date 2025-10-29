#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(void)
{
    char *buffer;

    //Memory allocation

    buffer = (char*)malloc(20*sizeof(char));

    if(!buffer)
    {
        printf("Allocation failed!\n");
        exit(0);
    }

    strcpy(buffer, "Using Malloc");

    printf("Stored value: %s\n", buffer);

    //Memory reallocation

    buffer = (char*)realloc(buffer, 40*sizeof(char));

    if(!buffer)
    {
        printf("Reallocation failed!\n");
        exit(0);
    }
    
    printf("**Stored value: %s\n", buffer);

    strcpy(buffer, "Using Malloc and Realloc");

    printf("Stored value: %s\n", buffer);

    //Memory freed

    //free(buffer);
    
    printf("value: %s\n", buffer);

	return 0;
}
