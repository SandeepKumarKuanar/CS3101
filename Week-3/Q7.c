/*

  An integer n when divided by another integer d (>0) belongs to exactly one of the mod d equivalence classes (Z_d) {[0], [1], [2], … [d-1]} where [i] (i being an integer) is the set of all integers with reminder i when divided by d such that i = 0, 1, 2, …, d - 1. That is, if n = 20, d = 5, n will belong to the class [0]; if n = 21, d = 5, n will belong to [1], and so on. Design a C program to print the mod d equivalent class of n using switch case. Note that it does not need to be a generic solution for any d (no need to take ‘n’ and ‘d’ as user inputs, and you can have fixed n, d values).
  
*/
#include<stdio.h> 
int main(){
  int proposed_number;
  printf("Give me a number to find a class out of it:\n");
  scanf("%d", &proposed_number);
  
  switch(proposed_number % 5){
    case 0: printf("This is class[0]\n"); 
      break;
    case 1: printf("This is class[1]\n"); 
      break;
    case 2: printf("This is class[2]\n"); 
      break;
    case 3: printf("This is class[3]\n"); 
      break;
    case 4: printf("This is class[4]\n"); 
      break;
  }
  return 0;
}
