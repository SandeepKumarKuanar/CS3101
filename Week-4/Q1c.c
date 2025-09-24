#include<stdio.h>

int main(){
	int turns = 5;
	int max = turns * 2 - 1;
	while(turns > 0){
		turns--;
		//printf("%d\n", turns);
		for(int i = 0; i < turns; i++){
			printf(" ");
		}
		
		for(int i = 0, put = 1; i < max - 2 * turns; i++){
			if(i % 2 == 0){
				if(turns == 2 && i == 2){
					printf("%d", put + 1);
					continue;
				}else if(turns == 1 && i == 4){
						printf("%d", put + 2);
						continue;
				}else if(turns == 1 && i == 2){
						printf("%d", put + 2);
						continue;
				}else if(turns == 0 && i == 2){
						printf("%d", put + 2 + 1);
						continue;
				}else if(turns == 0 && i == 6){
						printf("%d", put + 2 + 1);
						continue;
				}else if(turns == 0 && i == 4){
						printf("%d", put + 5);
						continue;
				}else{
				printf("%d", put);
				}
			}else{
				printf(" ");
			}
		}
		
		for(int i = 0; i < turns; i++){
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
