/*

Write a program to simulate the updation process of the current stock for three books 1, 2, and 3 handled by a librarian through three functions updateStockbook_i (i = 1, 2, 3) using a) global variables, b) static variables. The update is an increment of 1 in the stock of that book at a time. Print the current stock within the corresponding function after the update.

*/
#include<stdio.h>
int number_of_book1 = 100;
int number_of_book2 = 100;
int number_of_book3 = 100;

int updateStockbook_1(int added){
	if(added == 0){
		number_of_book1 -= 1;
	} else{
		number_of_book1 += 1;
	}

	printf("The current stock of books for book1 are: %d\n", number_of_book1);
}

int updateStockbook_2(int added){
	if(added == 0){
		number_of_book1 -= 1;
	} else{
		number_of_book1 += 1;
	}

	printf("The current stock of books for book1 are: %d\n", number_of_book1);
}

int updateStockbook_1(int added){
	if(added == 0){
		number_of_book1 -= 1;
	} else{
		number_of_book1 += 1;
	}

	printf("The current stock of books for book1 are: %d\n", number_of_book1);
}

int main(){
	printf("hello, this is the libarian of IISER-K\n");
	printf("If you have taken a book, enter 0, else if submitted the book, enter 1\n");
	int added;
	scanf("%d", &added);	
	updateStockbook_1(added);
	return 0;
}
