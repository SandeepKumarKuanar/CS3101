/*
	Write a program to implement a function IsSubsequence(s1, s2) which checks if string
	s1 is a subsequence of another string s2 or not (which checks if all characters of string s1 appear in string
	s2 in the same order but not necessarily consecutively). 
	
	E.g., ace is a subsequence of abcdef, but axe is not as x is absent in abcdef. 
	Note further that, the matches are case sensitive which means Ace is not a
	subsequence of abcdef as A is absent in the latter. 
	You may call IsSubsequence() from main() passing as arguments, string pairs (ace, abcdef) (should return 1) and (axe, abcdef) (should return 0), 
	to test	the correctness of the function. 
	You are not allowed to use any built-in function for the same that can replicate IsSubsequence(s1, s2)
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>


int IsSubsequence(char *s1, char *s2){
	int len1 = strlen(s1); //larger one
	int len2 = strlen(s2); //smaller one
	int equals = 0;
	//int yes = 0;
	for(int i = 0; i < len2; i++){
		for(int j = 0; j < len1; j++){
			if(s2[i] == s1[j]){
				equals += 1;
				printf("Yes, s1[%d] = %c, s2[%d] = %c\n", i, s2[i], j, s1[j]);
				break;			
			}
		}
	}
	printf("Number of characters which are equal are = %d\n", equals);
	if(equals == len2){
		return 1;
	}else{
		return 0;
	}
	//return 0;
}



int main(){
	char string1[] = "abcdef";
	char string2[] = "ace";
	char string3[] = "axe";
	
	//IsSubsequence(string1, string3);
	printf("Are the 2 strings we are comparing same?\n%d\n1 means 'Yes' & 0 means 'No'\n", IsSubsequence(string1, string3));
		
	return 0;
}


