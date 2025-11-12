/* A algo such that
	For n = 4
			
	1 
	1 2 
	1 2 3 
	1 2 3 4

*/
#include<stdio.h>
int caller(int x){
	if(x == 0){
		return 0;
	}else{
		caller(x-1);
		printf(" %d ", x);
		return 1;
	}
}

int looper(int y){
	if(y == 0){
		return 0;
	}else{
		
		looper(y - 1);
		printf("\n");
		caller(y);
		return 1;
	}
}

int main(){
	int ask_number;
	printf("Give a number for evaluation\n");
	scanf("%d", &ask_number);
	
	looper(ask_number);
	printf("\n");
	return 0;
}



