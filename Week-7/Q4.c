/*

	Take a number n as input. 
	Write a recursive function 
	that prints if n is a perfect number or not.

*/
#include<stdio.h>
int count;
int caller(int x, int y){
	if(x == 0){
		return 0;
	}else{
		caller(x-1, y);
		if(y % x == 0 && x != y){
			count += x;
			printf(" %d ", x);
		}
		return 1;
	}
}

int main(){
	int ask_number;
	printf("Give a number for evaluation\n");
	scanf("%d", &ask_number);
	
	caller(ask_number, ask_number);
	printf("\n");
	if(count == ask_number){
		printf("The given number is a perfect number, count is %d\n", count);
	}else{
		printf("The given number is not a perfect number, count is %d\n", count);
	}
	return 0;
}
