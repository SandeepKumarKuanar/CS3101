/*
Consider two FIFO-type data structures Q_junior and Q_senior, for simulating the sequence for vaccination. For each of n (a number of your choice) individuals, ask for name and date of birth (in dd/mm/yyyy format). Assume the current date to be 22/10/2025. If the person is more than 45 years old, add the name to Q_senior, if the person’s age is less than or equal to 45 but more than or equal to 18 years add the name to Q_junior; else, ignore with an appropriate message. Finally, display the vaccination sequences stored in  Q_junior and Q_senior. 
*/
/*Program of queue using array*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10

char *queue_junior[MAX];
int rear_junior=-1;
int front_junior=-1;

void insert_junior(char *item);
char* del_junior();
char* peek_junior();
void display_junior();
int isFull_junior();
int isEmpty_junior();


char *queue_senior[MAX];
int rear_senior=-1;
int front_senior=-1;

void insert_senior(char *item);
char* del_senior();
char* peek_senior();
void display_senior();
int isFull_senior();
int isEmpty_senior();

int ret_cat(int dd, int mm, int yyyy);

int main()
{
	int choice;
	char item[50];
	int dd = 21, mm = 10, yyyy = 2003, i;
	
	
	for(i = 1 ; i <= 5; i++)
	{
	
		printf("Give your name: ");
		scanf("%s", item);
		
		printf("Give your DOB (dd/mm/yyyy): \n");
		scanf("%d %d %d", &dd, &mm, &yyyy);
		
	
		choice = ret_cat(dd, mm, yyyy);
	
		switch(choice)
		{
			case 0: printf("Sorry! You are too young!\n\n");
					break;
					
					
				
			case 1: printf("Senior %s inserted!\n\n", item);
					insert_senior(item);
					break;	
					
			case 2: printf("Junior %s inserted!\n\n", item);
					insert_junior(item);
					break;
					
									
		}
	
	}
	
	display_junior();
	display_senior();
    return 0;
}

void insert_junior(char* item)
{
	if( isFull_junior() )
	{
		printf("Queue Overflow\n");
		return;
	}
	if( front_junior == -1 )  
		front_junior = 0;
	rear_junior = rear_junior + 1;
	queue_junior[rear_junior] = strdup(item);
	display_junior();
}/*End of insert()*/

char* del_junior()
{
	char item[50];
	if( isEmpty_junior() )
	{
		printf("Queue Underflow\n");
		exit(1);
	}
	strcpy(item, queue_junior[front_junior]);
	front_junior = front_junior + 1;
	display_junior();
	return item;
}/*End of del()*/

char* peek_junior()
{
	if( isEmpty_junior() )
	{
		printf("Queue Underflow\n");
		exit(1);
	}
	return queue_junior[front_junior];
}/*End of peek()*/

int isEmpty_junior()
{
	if( front_junior == -1 || front_junior == rear_junior + 1 )
		return 1;
	else
		return 0;
}/*End of isEmpty()*/

int isFull_junior()
{
	if( rear_junior == MAX-1 )
		return 1;
	else
		return 0;
}/*End of isFull()*/

void display_junior()
{
	int i;
	if ( isEmpty_junior() )
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Junior Queue is :\n\n");
	for(i  = front_junior ; i<=rear_junior; i++)
		printf("%s  ", queue_junior[i]);
	printf("\n\n");
}/*End of display() */

int ret_cat(int dd, int mm, int yyyy)
{
	//Current date: 22/10/2021
	if(yyyy > 2003 || (yyyy == 2003 && mm == 10 && dd >= 22) || (yyyy == 2003 && mm > 10))
	{
		printf("Not eligible!\n\n");
		return 0;
	}
	
	if(yyyy < 1976 || (yyyy == 1976 && mm == 10 && dd < 22) || (yyyy == 1976 && mm < 10))
	{
		printf("Senior!\n\n");
		return 1;
	}
	
	printf("Junior!\n\n");
	return 2;
}


void insert_senior(char* item)
{
	if( isFull_senior() )
	{
		printf("Queue Overflow\n");
		return;
	}
	if( front_senior == -1 )  
		front_senior = 0;
	rear_senior = rear_senior + 1;
	queue_senior[rear_senior] = strdup(item);
	display_senior();
}/*End of insert()*/

char* del_senior()
{
	char item[50];
	if( isEmpty_senior() )
	{
		printf("Queue Underflow\n");
		exit(1);
	}
	strcpy(item, queue_senior[front_senior]);
	front_senior = front_senior + 1;
	display_senior();
	return item;
}/*End of del()*/

char* peek_senior()
{
	if( isEmpty_senior() )
	{
		printf("Queue Underflow\n");
		exit(1);
	}
	return queue_senior[front_senior];
}/*End of peek()*/

int isEmpty_senior()
{
	if( front_senior == -1 || front_senior == rear_senior + 1 )
		return 1;
	else
		return 0;
}/*End of isEmpty()*/

int isFull_senior()
{
	if( rear_senior == MAX-1 )
		return 1;
	else
		return 0;
}/*End of isFull()*/

void display_senior()
{
	int i;
	if ( isEmpty_senior() )
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Senior Queue is :\n\n");
	for(i  = front_senior ; i<=rear_senior; i++)
		printf("%s  ", queue_senior[i]);
	printf("\n\n");
}/*End of display() */
