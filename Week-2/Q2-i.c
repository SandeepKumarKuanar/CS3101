/*

Name functions as RollaCosta, Dominos, and Bawarchi – three restaurants in Kalyani. Every time you call a function, a message will be printed indicating the visit number of that function (restaurant). E.g., if you call RollaCosta, it will print “Welcome to Rolla Costa! This is your visit number 2” (assuming this is your 2nd call of the function). Implement this scheme using C programming language by using ii) static variables.

*/
#include<stdio.h>
int RC_counter = 0;
int Dominos_counter = 0;
int Bawarchi_counter = 0;

int Rollacosta(){
	RC_counter += 1;
	printf("Welcome to Rolla Costa! This is your visit number %d\n", RC_counter);
	return 0;
}

int Dominos(){
	Dominos_counter += 1;
	printf("Welcome to Rolla Costa! This is your visit number %d\n", Dominos_counter);
	return 0;
}

int Bawarchi(){
	Bawarchi_counter += 1;
	printf("Welcome to Rolla Costa! This is your visit number %d\n", Bawarchi_counter);
	return 0;
}

int main(){
	Rollacosta();
	Dominos();
	Bawarchi();
	return 0;
}
