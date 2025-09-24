#include<stdio.h>
int main(){
	int turns = 4;
	for(int i = 1; i < turns + 1; i++){
		for(int j = i; j < turns + 1; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}
