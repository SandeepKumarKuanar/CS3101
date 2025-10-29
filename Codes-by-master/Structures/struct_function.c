#include<stdio.h>
#include<string.h>

typedef struct book{
    char title[50];
    char id[10];
    int no;
}BOOK;

void display(BOOK b)
{
    printf("Book title: %s\n", b.title);
    printf("Book id: %s\n", b.id);
    printf("Copies in stock: %d\n\n", b.no);
}

BOOK update(BOOK b)
{
    b.no++;
    return b;
}

int main(void)
{
    BOOK book1 = {"Let us C", "B123", 5}, book2 = {"The Art of Computer Programming", "A1245", 3};

    display(book1);
    display(book2);

    book1 = update(book1);

    display(book1);

	return 0;
}
