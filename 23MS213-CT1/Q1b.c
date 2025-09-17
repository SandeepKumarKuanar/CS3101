/*

	Name functions as Laddu, Rosogolla and Shrikhand. A call to that function indicates
	that you have consumed one more unit of that item. So, every time you call a function, a message will
	be printed indicating the number of times you have had the delicacy. E.g., if you call Rosogolla, it will
	print “I bet you loved the Rosogolla! This is your Rosogolla number 5 !!” (assuming this is your 5th call
	of the function). Please implement this scheme using the C programming language by using
	
	(b) (Marks: 3) static variables.

*/
#include<stdio.h>

int Laddu(){
	static int Laddu_count = 0;
	Laddu_count++;
	printf("I bet you loved the Laddu! This is your Laddu number %d!!\n", Laddu_count);
	return 0;
}

int Rosogolla(){
	static int Rosogolla_count = 0;
	Rosogolla_count++;
	printf("I bet you loved the Rosogolla! This is your Rosogolla number %d!!\n", Rosogolla_count);
	return 0;
}

int Shrikhand(){
	static int Shrikhand_count = 0;
	Shrikhand_count++;
	printf("I bet you loved the Shrikhand! This is your Shrikhand number %d!!\n", Shrikhand_count);
	return 0;
}

// the main calling center
int main(){
	Laddu();
	Laddu();
	Rosogolla();
	Rosogolla();
	Laddu();
	Shrikhand();
	Laddu();
	Shrikhand();
	return 0;
}
