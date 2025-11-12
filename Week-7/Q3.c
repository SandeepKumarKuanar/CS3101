/*
Take a number n as input. 
Write a recursive function 
that prints the numbers 1-n in reverse order.
*/

#include<stdio.h>
int caller(int x){
	if(x == 1){
		return 1;
	}else{
		return x + caller(x - 1);
	}
	
	
}

int main(){
	int ask_number;
	printf("Give a number for evaluation\n");
	scanf("%d", &ask_number);
	
	caller(ask_number);
	printf("Value of caller %d\n", caller(ask_number));
	return 0;
}
