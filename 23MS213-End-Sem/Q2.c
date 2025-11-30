/*
Write a program in C to take the name of your best friend (say, BestFriend) as input from
the terminal and print BestFriend and MyName are cool buddies!, where MyName is your name.
*/
#include<stdio.h>
int main(){
	char myName[] = "Sandeep";
	char bestFriend[100];
	
	printf("What is your name?\n");
	scanf("%s", bestFriend);
	
	printf("%s and %s are cool buddies!\n", bestFriend, myName);
	
	return 0;
}
