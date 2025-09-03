/*

	Write a program to calculate the electricity bill based on the 
	units and the rates as given below, with an appropriate decision-making structure 
	(e.g., if-else-if). 

	The units (an integer) will be taken as input from the user, and 
	the total bill (using “%f”), based on the rate, in Rs. will be printed on the terminal.

*/

#include<stdio.h>

int main(){
	int userInput;
	printf("Give the input\n");
	scanf("%d", &userInput);
	float total;
	if (userInput < 25) {
		total += 4.89 * userInput;
	} else if (userInput > 25 && userInput < 25 + 35){
		total += 4.89 * 25;
		total += 5.40 * (userInput - 25);
	} else if (userInput > 60 && userInput < 100){
		total += 4.89 * 25;
		total += 5.40 * 35;
		total += 6.41 * (userInput - 60);
	} else if (userInput > 100 && userInput < 150){
		total += 4.89 * 25;
		total += 5.40 * 35;
		total += 6.41 * 40;
		total += 7.16 * (userInput - 100);
	} else if (userInput > 150 && userInput < 200){
		total += 4.89 * 25;
		total += 5.40 * 35;
		total += 6.41 * 40;
		total += 7.16 * 50;
		total += 7.33 * (userInput - 150);
	} else if (userInput > 200 && userInput < 300){
		total += 4.89 * 25;
		total += 5.40 * 35;
		total += 6.41 * 40;
		total += 7.16 * 50;
		total += 7.33 * 50;
		total += 7.33 * (userInput - 200);
	}  else if (userInput > 300){
		total += 4.89 * 25;
		total += 5.40 * 35;
		total += 6.41 * 40;
		total += 7.16 * 50;
		total += 7.33 * 50;
		total += 7.33 * 100;
		total += 8.92 * (userInput - 300);
	}
	
	
	printf("Then your total amount would be: %.4f\n", total);
	return 0;
}
