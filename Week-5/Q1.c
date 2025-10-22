/*to implement the minimum and maximum of the 2 numbers given to me from the user*/

#include<stdio.h>
int MAXINT(int a, int b){
	if (a > b){
		return a;
	} else{return b;}	
}

int MININT(int a, int b){
	if (a < b){
		return a;
	} else{return b;}	
}

int main(){
	int a, b;
	printf("Give me the first element\n");
	scanf("%d", &a);	
	printf("Give me the second element\n");
	scanf("%d", &b);
	
	printf("This is the maximum of the 2 numbers that you have given to me -> %d\n", MAXINT(a, b));
	printf("This is the minimum of the 2 numbers that you have given to me -> %d\n", MININT(a, b));
	return 0;
}
