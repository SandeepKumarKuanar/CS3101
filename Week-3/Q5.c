/*
	
	Write a program to assign teams (one for the Females and another for the Males) to students for the annual sports meet based on the criteria below, with an appropriate decision-making structure (e.g., if-else-if). You should ask for the Roll Number (an integer) and Gender (a character – M/F; declared as char and read using “%c”) as input from the terminal and print the Team Name for the student.

*/

#include<stdio.h>
int main(){
	int rollNumber;
	char gender;
	printf("What is your roll number?\n");
	scanf("%d", &rollNumber);
	printf("What is your gender? If it's male then enter M, else F for Female\n");
	scanf(" %c", &gender);
	
	// all the cases, meticulously written down by hand
	if(rollNumber >= 1 && gender == 'F' && rollNumber <= 25){
		printf("Then the team name is Mary Kom Smashers");
	} 
	else if(rollNumber > 25 && gender == 'F' && rollNumber <= 50){
		printf("Then the team name is Smriti Mandana Dashers");
	}
	else if(rollNumber > 50 && gender == 'F'){
		printf("Then the team name is Manu Bhaker Snipers");
	}
	else if(rollNumber >= 1 && gender == 'M' && rollNumber <= 20){
		printf("Then the team name is Virat Kohli Challengers");
	}
	else if(rollNumber > 20 && gender == 'M' && rollNumber <= 40){
		printf("Then the team name is R Praggnanandhaa Combaters");
	}
	else if(rollNumber > 40 && gender == 'M'){
		printf("Then the team name is Neeraj Chopra Warriors");
	}
	
	return 0;
}

