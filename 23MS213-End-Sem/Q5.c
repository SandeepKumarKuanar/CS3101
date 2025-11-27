/*
Write a program in C to design a mini Vegetable Store. Store vegetable details like
name and quantity in stock in a structure and construct an array of structures for multiple (a number
of your choice) vegetables. Write these details in a file “MyVegetables.txt”.


Then, implement a simple, interactive terminal-based user interface to display the items (menu-driven),
welcome a user with a suitable message, and request the user to select an item of choice, using do-while
and switch statements. If the user buys and after s/he completes the buying process, print the bill
amount with an appropriate message, and the updated stock should reflect in your file. Print the
elements in the file to ensure that the update has taken place.

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct vegetable{
    char name[50];
    int id;
    int quantity;
}VEGETABLE;

#define N 2
//greeting function
void greet(){
	printf("Hello, and welcome to My SabjiMandi\n");
	printf("--------------:)---------------------\n");
	printf("See the catalogue below to learn more\n");
	printf("--------------:)---------------------\n");
}

//thank you function
void thanks(){
	printf("--------------:)---------------------\n");
	printf("Kindly drop by again, happy to see you again!\n");
	printf("--------------:)---------------------\n");
}

// writes into the database, to be runned once
void fileWrite(char *filename, VEGETABLE* v, int no_of_records)
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
        fwrite(&v[i], sizeof(VEGETABLE), 1, fptr);        
    }
    fclose(fptr);
}

// reads the file given, doubles as menu
void fileRead(char *filename)
{
    FILE *fptr;
    VEGETABLE vegetable;

    printf("\nMenu from the catalogue\n\n");
    fptr = fopen(filename, "r+");
    if(fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    while(fread(&vegetable, sizeof(VEGETABLE), 1, fptr)){
        printf ("Name  = %s, ID = %d, stock = %d\n", vegetable.name, vegetable.id, vegetable.quantity); 
    }

    fclose(fptr);
}

int main(void)
{
    VEGETABLE vegetables[N], vegetable;
    FILE *fptr;
    char filename[] = "MyVegetables.txt";
    
    
	//loading the record
	//1st
    strcpy(vegetables[0].name, "Bhindi");
    vegetables[0].id = 1;
    vegetables[0].quantity = 5;

	//2nd
    strcpy(vegetables[1].name, "Dhania");
    vegetables[1].id = 2;
    vegetables[1].quantity = 10;
    //add more here
    
    
    //greeting the users
    greet(); 
	//writing into the database, onces
    //fileWrite(filename, vegetables, N);
	//reading to display the catalogue
    fileRead(filename);
    //ask for the ID of the thing the user wants to purchase
    
    int code = 0, demands;
    int keepMoving = 1;
    printf("Please give the code of the vegatable you want to buy!\n");
    scanf("%d", &code);
    do{
    	fileRead(filename);
    	//switch case to find the thing
		switch(code){
			case 1:;
			case 2:
				printf("How many of them?:\n");
				scanf("%d", &demands);
				if(demands > vegetables[code - 1].quantity){
					printf("Sorry! We are out of stock!!\n");
				}else{
					printf("Deducted %d units from stock\n", demands);
					vegetables[code - 1].quantity -= demands;
					// asking if wanna continue?
					printf("If you want to continue, type and enter 1, else 0\n");
					scanf("%d", &keepMoving);
				}
		}
		
		fileRead(filename);
		
    }while(keepMoving == 1);
    
    //updating the change
    fileWrite(filename, vegetables, N);
    
    //reading the file
    fileRead(filename);
    
    //thanking the user, when they leave
    thanks();
    
	return 0;
}

