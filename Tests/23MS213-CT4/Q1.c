/*
	Write a program to implement a function IsSubstr(s1, s2) which checks if string s1 is
	a substring of another string s2 or not. E.g., ayan is a substring of Dwaipayan, but maya is not. You
	may call IsSubstr() from main() passing as arguments, string pairs (ayan, Dwaipayan) (should return 1) and 
	(maya, Dwaipayan) (should return 0), to test the correctness of the function. You are not allowed
	to use any built-in function for the same that can replicate IsSubstr(s1, s2).
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>


int IsSubstr(char *s1, char *s2){
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int yes = 0;
	for(int i = 0; i < len1; i++){
		int location = 0;
		int equals = 0;
		if(s1[i] == s2[0]){
			location = i;
			//printf("%c\n", s1[i]);
			//printf("Location is %d\n", location);
			for(int j = 0; j < len2; j++){
				if(s1[location + j] == s2[j]){
					equals += 1;
				}
			}
			//printf("HELLO, Equals are %d\n", equals);
			
			if(equals == len2){
				yes = 1;
				break;
			}
		}
		
	}
	if(yes == 1){
		return 1;
	}
	return 0;
}



int main(){
	char string1[] = "Dwaipayan";
	char string2[] = "ayan";
	char string3[] = "maya";
	//IsSubstr(string1, string2);
	
	printf("Are the 2 strings we are comparing same?\n%d\n1 means 'Yes' & 0 means 'No'\n", IsSubstr(string1, string2));
		
	return 0;
}

