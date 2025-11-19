// mark for example from AI
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    FILE *fptr, *fptr1;
    char c, name[] = "MY NAME IS SANDEEP KUMAR KUANAR";
    int i = 0;

    // Writing to file Data1.txt
    fptr = fopen("Data1.txt", "w");
    c = name[i++];
    while(c != '\0'){
        putc(c, fptr);
        c = name[i++];
    }
    fclose(fptr);

    // Reading from Data1.txt and writing to Data2.txt in lowercase
    fptr = fopen("Data1.txt", "r");
    fptr1 = fopen("Data2.txt", "w");

    c = getc(fptr);

    while (c != EOF){
        //printf("%c", c);
        putc(tolower(c), fptr1);
        c = getc(fptr);
    }
    
	fclose(fptr);
	fclose(fptr1);
	
    // Reading from Data2.txt and displaying on console
	fptr1 = fopen("Data2.txt", "r");

    c = getc(fptr1);
    while (c != EOF){
        printf("%c", c);
        c = getc(fptr1);
    }
	fclose(fptr1);
}
