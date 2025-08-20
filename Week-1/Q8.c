/*Write a C program to take the name (e.g., Kripa) and age (41) (supposing your name is “Sachin” and your age is 50) as input from the user and print a message on the terminal: “Hello Kripa, you are 41 years old. I am Sachin, I am 50 years old”.
*/
#include<stdio.h>


int main(){
	char name[100];
	float age;
	printf("Give me your name:\n");
	scanf("%s", name);
	printf("Give me your age:\n");
	scanf("%f", &age);
	printf("“Hello %s, you are %f years old. I am Sandeep, I am 21 years old”\n", name, age);
	return 0; 
}

