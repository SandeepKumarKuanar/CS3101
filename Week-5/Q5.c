#include<stdio.h>
int main(){
        int x = 10;
        int *p = &x; // 'p' stores the address of 'x'
        int value = *p; // 'value' will be 10 (the value at the address 'p' points to)
	printf("%d\n", x);
	printf("%d\n", value);

	return 0;
}
