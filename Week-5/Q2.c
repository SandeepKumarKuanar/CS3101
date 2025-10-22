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
	int a, b, c, d;
	printf("Give me the first element\n");
	scanf("%d", &a);	
	printf("Give me the second element\n");
	scanf("%d", &b);
	printf("Give me the third element\n");
	scanf("%d", &c);
	
	d = MAXINT(a, b);	
	d = MAXINT(c, d);
	printf("This is the maximum of the 3 numbers that you have given to me -> %d\n", d);
	d = MININT(a, b);	
	d = MININT(c, d);
	printf("This is the minimum of the 3 numbers that you have given to me -> %d\n", d);
	return 0;
}
