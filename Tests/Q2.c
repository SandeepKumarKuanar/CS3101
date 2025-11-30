/*

	In a dance reality show Dancistan, there are five contestants: Dev, Ankush, Allu, Nora and Tamannah. 
	There are three rounds where three judges (Madhuri, Prabhu, and Mithun) score each
	of the participants, and the sum of scores of the three judges is considered for each contestant.

	1. Round 1: The lowest scorer (based on the sum of three judges for this round) gets eliminated; the
	top 4 contestants remaining
	2. Round 2: The lowest scorer among the top 4 (round 1 score carried forward + round 2 score, which
	is again the sum of three judges for round 2) gets eliminated; the top 3 contestants remaining
	3. Round 3: The lowest scorer among the top 3 (round 1 score + round 2 score carried forward +
	sum of three judges for round 3) gets eliminated, to set up the finale between the top 2.
	
	
	However, one of the three eliminated contestants returns for the finale through public voting as a wild-
	card entry.


	At the finale, the top 2 and the wildcard entry compete, and the winner, the first runner-up, and the
	second runner-up are decided only on the finale performance, again on the sum of three judges.
	Simulate the whole process through C implementation: take scores (and wildcard entry) as input, print
	the eliminated participants at the first three rounds, and finally print the three position holders for the
	finale. Assume that the judges input their scores (at all rounds and in the finale) through
	the terminal, and the public voting choice is also through the terminal. You may use only
	local variables; file handling is not necessary.


	sorting, structs, 
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct contestant{
	int id;
    char name[50];
    int scores;
}CONTESTANT;

int main(){	
	struct CONTESTANT contestants[] = {
        {1, "Dev", 0},
        {2, "Ankush", 0},
        {3, "Allu", 0},
        {4, "Nora", 0},
        {5, "Tamannah", 0},
    };
	
	//Judges
	char judge1[] = "Madhuri";
	char judge2[] = "Prabhu";
	char judge3[] = "Mithun";
	
	//when ever round ends, we would move a sorting algorithm that sorts the array containing the scores of contestents
	//only the desired number of array members are chosen in the next round
	//int leaderboard[5] = {score1, score2, score3, score4, score5};
	
	//for the wildcard enters
	char wildcards[] = {};
	
	//for those who are eliminated
	char eliminated[] = {};
	
	//leaderboard 
	for (int i = 0; i < 5; i++) {
        printf("ID: %d | Name | Points: ", 
            contestants[i].id, contestants[i].name, 
            contestants[i].scores);
    }
    printf("\n");
	
	return 0;
}

