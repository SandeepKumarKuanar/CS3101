#include<stdio.h>
#include<string.h>


void main()
{
	FILE *fptr;
    char c, name[] = "Mahishashurmardini maa durga";
    int i = 0;

   fptr = fopen("file_getc_putc-self.c", "r");

    c = getc(fptr);

    while (c != EOF)
    {
        printf("%c", c);
        c = getc(fptr);
    }
    
	fclose(fptr);


}
//Comment//Comment
