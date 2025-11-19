#include<stdio.h>
#include<string.h>

typedef struct book{
    char title[50];
    char id[10];
    int no;
}BOOK;

void display(BOOK * b)
{
    printf("Book title: %s\n", b->title);
    printf("Book id: %s\n", b->id);
    printf("Copies in stock: %d\n\n", b->no);
    //(b->no)++;
}

void update(BOOK* b)
{
    b->no++;
    
}

void display_title_array(BOOK *b_array, int len, int index)
{
	if(index <= len - 1)
	{
	 	printf("Book title in book array: %s\n", b_array[index].title);
	 }
	 else
	 {
	 	printf("Invalid index!\n");
	 }	
}

int main(void)
{
    BOOK book[2];
    
    strcpy(book[0].title, "Let us C");
    strcpy(book[0].id, "B123");
    book[0].no = 5;
    
     
    strcpy(book[1].title, "The Art of Computer Programming");
    strcpy(book[1].id, "A1245");
    book[1].no = 3;
    
    display(&book[0]);
    display(&book[1]);
   
    update(&book[0]);

    display(&book[0]);
    
    display_title_array(book, 2, 0);

    return 0;
}
