/*

	Consider a Genie standing in front of the treasure door. The Genie asks you a puzzle, e.g., “The day before two days after the day before tomorrow is Saturday. What day is it today?” with four options like a) Sunday, b) Monday….. The Genie lets you in only if the answer is correct; else imprisons you. Implement this scheme using switch-case, where you print messages based on success, failure, or invalid answer. 

	Can you also do it using a maximum of three “break”s?

*/

#include<stdio.h>
int main(){
	printf("Give the correct option for the puzzle, else you would be \n");
	printf("Q. Are you GAY?\n");
	printf("a. YES! \nb. NO!\nc. Depends on who is infront of me \nd. I am a Female\n");
	printf("give the option you want to give me as the answer, as 1 character\n");
	char answer;
	scanf(" %c", &answer);
	
	printf("this is the answer, %c\n", answer);
	printf("Okay, responding. . .\n. . .\n. . .okay\n");
	
	switch(answer){
		case 'c': printf("Thanks for being honest, Here's your treasure\n");
			break;
		case 'a':
		case 'b':
		case 'd':
		default: printf("OKAY, U ARE IMPRISIONED FOR INCORRECT ANSWER!\n");
			break;
	}
	return 0;
}
