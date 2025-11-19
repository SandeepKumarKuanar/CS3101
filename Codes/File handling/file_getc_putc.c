#include<stdio.h>
#include<string.h>


void main()
{
    FILE *fptr;
    char c, name[] = "Mahishashurmardini";
    int i = 0;

    fptr = fopen("Data.txt", "w");

    c = name[i++];

    while(c != '\0')
    {
        putc(c, fptr);

        c = name[i++];
    }

    fclose(fptr);

    fptr = fopen("Data.txt", "r");

    c = getc(fptr);

    while (c != EOF)
    {
        printf("%c", c);
        c = getc(fptr);
    }
    
	fclose(fptr);


}
