/*Write two functions: 
 i) INCVAL() – that takes the value of an integer as an argument and returns its incremented value, and 
 ii) INCREF() – that takes the address of an integer as an argument and increments its value. 
 Call these functions from main() to increment two local variables in main() 
 – one using the first function and the other using the second one, and then print the incremented values of these two local variables in main().
*/
#include<stdio.h>
int INCVAL(int a){
	return a = a + 1;
}

int INCREF(int *a){
	return ++(*a);
}

int main(){
	int a, b;
	printf("GIVE ME THE FIRST NUMBER:\n");
	scanf("%d", &a);

	printf("GIVE ME THE SECOND NUMBER:\n");
	scanf("%d", &b);

	printf("This is incrementing the %d that u gave me %d\n", a, INCVAL(a));
	printf("This is incrementing the %d that u gave me %d\n", b, INCREF(&b));
			
	return 0;
}
