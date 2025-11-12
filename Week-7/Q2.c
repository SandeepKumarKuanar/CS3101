/*
	Take a number n as input. 
	Write a recursive function 
	that prints the numbers 1-n in forward order.
*/

#include<stdio.h>
int caller(int x){
	static int count;
	if(x == 0){
		return 0;
	}else{
		//printf(" %d ", count += 1);
		count += 1;
		printf(" %d ", count);
		return caller(x - 1);
	}
	
}

int main(){
	int ask_number;
	printf("Give a number for evaluation\n");
	scanf("%d", &ask_number);
	
	caller(ask_number);
	printf("\n");
	return 0;
}
