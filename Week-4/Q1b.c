#include<stdio.h>

int main(){
	int turns = 5;
	
	/*for(turns; turns > 0; turns--){
		printf("%d", turns);
		for(int correction = 10; correction > turns; correction--){
			printf("%d ", correction);
		}
		printf("\n");
	}*/
	int corrections = 1;
	int one = 1;
	while(corrections < turns + 1){
		printf("%d ", one);
		
		for(int i = 1; i < corrections; i++){
			printf("%d ", i);
			
		}
		corrections++;
		printf("\n");
	}
	return 0;
}
