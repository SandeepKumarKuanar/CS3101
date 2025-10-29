//Reading/writing structure-wise (fixed-length record)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct book{
    char title[50];
    char id[10];
    int no;
    
}BOOK;

void fileWrite(char *filename, BOOK* books, int no_of_records)
{
    FILE *fptr;
    int i;

    printf("\nWriting in file %s:\n\n", filename);

    fptr = fopen(filename, "w");

    if(fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    for(i = 0 ; i < no_of_records ; i++)
    {
        fwrite(&books[i], sizeof(BOOK), 1, fptr);        
    }
    
    

    fclose(fptr);


}

void fileRead(char *filename)
{
    FILE *fptr;
    BOOK book;

    printf("\nReading from file %s:\n\n", filename);

    fptr = fopen(filename, "r+");

    if(fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    while(fread(&book, sizeof(BOOK), 1, fptr)) 
    {
        
        printf ("Title = %s id = %s stock = %d\n", book.title, 
        book.id, book.no); 
        printf("Current position: %ld  \n", ftell(fptr));

    }

    fclose(fptr);
}

void fileUpdate(char *filename)
{
    FILE *fptr;
    BOOK book;

    printf("\nUpdating in file %s:\n\n", filename);

    

    fptr = fopen(filename, "r+");

    if(fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }


    while(fread(&book, sizeof(BOOK), 1, fptr)) 
    {
        
        printf ("Title = %s id = %s stock = %d\n", book.title, 
        book.id, book.no); 
        printf("Current position: %ld  ", ftell(fptr));
        if(strcmp(book.id, "B123") == 0)//Check for a particular book id
        {
            book.no = book.no - 2;//Updating the stock
            //fseek(fptr, -64L, 1);
            fseek(fptr, -sizeof(BOOK), 1);
            fwrite(&book, sizeof(BOOK), 1, fptr);
            break;
        }
        
    }    

    rewind(fptr);

    printf("\n\nAfter update:\n");

    while(fread(&book, sizeof(BOOK), 1, fptr)) 
    {
        
        printf ("Title = %s id = %s stock = %d\n", book.title, 
        book.id, book.no); 
        printf("Current position: %ld  \n\n", ftell(fptr));

    }


    fclose(fptr);

}

void fileUpdateDirect(char *filename)
{
    FILE *fptr;
    BOOK book;
    long int n, block_no;

    printf("\nUpdating via direct access in file %s:\n\n", filename);

    

    fptr = fopen(filename, "r+");

    if(fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    block_no = 2;//Number of record to be updated

    n = (block_no - 1)*sizeof(BOOK);//The starting address of the appropriate record

    printf("\nn = %ld\n", n);

    fseek(fptr, n, 0);

    printf("Current position: %ld  ", ftell(fptr));

    fread(&book, sizeof(BOOK), 1, fptr);
        
    book.no = book.no - 2;
    //fseek(fptr, -64L, 1);
    fseek(fptr, -sizeof(BOOK), 1);
    fwrite(&book, sizeof(BOOK), 1, fptr);
       
    
        
        

    rewind(fptr);

    printf("\n\nAfter update:\n");

    while(fread(&book, sizeof(BOOK), 1, fptr)) 
    {
        
        printf ("Title = %s id = %s stock = %d\n", book.title, 
        book.id, book.no); 
        printf("Current position: %ld  \n", ftell(fptr));

    }


    fclose(fptr);

}    


void fileReadWrite(char *filename)
{
    FILE *fptr;
    BOOK book, *books;
    int no_of_rec = 0, i;

     printf("\nReading from file %s:\n\n", filename);

    fptr = fopen(filename, "r+");

    if(fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    while(fread(&book, sizeof(BOOK), 1, fptr)) 
    {
        
        
        no_of_rec++;//count the number of records (each record is a BOOK type variable)

    }
    
    books = (BOOK*)malloc(no_of_rec*sizeof(BOOK));//allocating dynamically space for the number of records in the file to be read
    
    rewind(fptr);//going to the beginning of the file
    
    i = 0;

    while(fread(&book, sizeof(BOOK), 1, fptr)) //reading each record
    {
        //printf("Current position: %ld  ", ftell(fptr));
        //printf ("Title = %s id = %s stock = %d\n", book.title, 
        //book.id, book.no); 
        
        strcpy(books[i].title, book.title);
    	strcpy(books[i].id, book.id);
    	books[i].no = book.no;
    	if(strcmp(book.id, "B567") == 0)//check if this is the record to be updated
        {
        	books[i].no+=2;//updating
		}
    	
    	i++;
    }  
    /*
    printf("After update:\n\n");
	
	for(i = 0 ; i < no_of_rec; i++)
	{
		printf ("Title = %s id = %s stock = %d\n", books[i].title, books[i].id, books[i].no);
	}  */

    fclose(fptr);
    
    printf("\nWriting in file %s:\n\n", filename);

    fptr = fopen(filename, "w");

    if(fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    for(i = 0 ; i < no_of_rec ; i++)
    {
        fwrite(&books[i], sizeof(BOOK), 1, fptr); //overwriting the file with the updated record (even the unchanged records are overwritten)       
    }
    
    fclose(fptr);
}


int main(void)
{
    BOOK books[2], book;
    FILE *fptr;
    char filename[] = "books1.txt";
    
	//loading the record
    strcpy(books[0].title, "Let us C");
    strcpy(books[0].id, "B123");
    books[0].no = 5;

    strcpy(books[1].title, "Introduction to Algorithms");
    strcpy(books[1].id, "B567");
    books[1].no = 10;
    
    
	//writing
    fileWrite(filename, books, 2);

	//reading
    fileRead(filename);
    
    //updating
    fileReadWrite(filename);
    
    //fileUpdate(filename);
    
    //reading again
    fileRead(filename);
    
    //fileUpdateDirect(filename);
    //fileRead(filename);

    

   


	return 0;
}
