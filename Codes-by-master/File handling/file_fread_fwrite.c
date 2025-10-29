#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct book{
    char title[50];
    char id[10];
    int no;
    
}BOOK;


int main(void)
{
    BOOK book1 = {"Let us C", "B123", 5}, book2 = {"Introduction to Algorithms", "B567", 10}, book;
    FILE *fptr;
    long int n;

    fptr = fopen("books.txt", "w+");

    if(fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

   	
   fwrite(&book1, sizeof(BOOK), 1, fptr);
   fwrite(&book2, sizeof(BOOK), 1, fptr);

   rewind(fptr);
   
    printf("Current position: %ld  \n", ftell(fptr));

    while(fread(&book, sizeof(BOOK), 1, fptr)) 
    {
        printf("Current position: %ld  ", ftell(fptr));
        printf ("Title = %s id = %s stock = %d\n", book.title, 
        book.id, book.no); 
    }    

    
    


    fclose(fptr);



	return 0;
}
