/*
	Write a C program to take a name (e.g. SURYA) as input from the terminal and print
	it in the way shown in Figure 1 (there is one new line after every line). If the string is of even length, you should not print anything.
*/

#include <stdio.h>
#include <string.h>

int main(){

	char name[5];

    printf("Enter the name for which you want to see the pattern: ");
    scanf("%s", name);
    
    int length = strlen(name), mid; 
    if(length % 2 != 0){
    	mid = length / 2;
    	int left = mid, right = mid;
    	for(int i = 0; i < length; i++){
			for(int k = left; k > 0; k--){
					printf("%c", name[k]);
			}
    		printf("%c", name[mid]);
    		for(int j = right; j < length; j++){
    			printf("%c", name[j]);
    		} 
    	printf("\n");
    	}
    	
    	
    }
    
    printf("\n");

	return 0;
}
