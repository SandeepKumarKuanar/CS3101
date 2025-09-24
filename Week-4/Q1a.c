#include<stdio.h>

int main(){
	int turns = 10;
	
	for(turns + 1; turns > -1; turns--){
		//printf("%d", turns);
		for(int correction = 10; correction > turns; correction--){
			printf("%d ", correction);
		}
		printf("\n");
	}
	return 0;
}
