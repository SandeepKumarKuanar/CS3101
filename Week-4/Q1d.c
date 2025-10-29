#include<stdio.h>

void main(){
	int i, j, k, n = 5;
	
	for(i = n ; i >= 1; i--){
		for(j = n ; j>= n - (n - i); j--){
			printf("%d ", j);
		}
		for(k = j + 2 ; k <= n; k++){
			printf("%d ", k);
		}
		printf("\n");
	}
}

