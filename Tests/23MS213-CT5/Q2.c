#include <stdio.h>
#include <string.h>

#define N 6
#define J 4

// J == number of judges 
// N == number of participants

int main() {
    char contestants[N][20] = {"Ankita", "Deyashini", "Niharika", "Pranay", "Vineet", "Padmapalash"};
    int active[N] = {1, 1, 1, 1, 1, 1}; 
    int totalScore[N] = {0};
    int roundScore[N] = {0};
    int i, j, r; //for loops 

    // ---------- 3 ROUNDS + 1 SEMI FINAL ROUND----------
    for (r = 1; r <= 4; r++) {
    	if(r == 4){
    		printf("\n--- SEMI FINAL ROUND---\n");
    	}else{
    		printf("\n--- ROUND %d ---\n", r);
    	}
        //printing leaderboards
        printf("Results of the round are:\n");
        for(int i = 0; i < N; i++){
        	printf("Contestants[%d] = %s ; active = %d ; roundScores = %d ; totalScores = %d\n", i, contestants[i], active[i], roundScore[i], totalScore[i]);
        }

		//giving points to them
        for (i = 0; i < N; i++) {
            roundScore[i] = 0;
            if (active[i] >= 1) {
                int s, u, a, k;
                
                printf("\nEnter scores for %s (Sanu Udit Alka Kavita): ", contestants[i]);
                scanf("%d %d %d %d", &s, &u, &a, &k);
                roundScore[i] = s + u + a + k;
                totalScore[i] += roundScore[i];
            }
        }

        // Find lowest scorer among active contestants
        int lowIndex = -1, lowScore = 99999;
        for (i = 0; i < N; i++) {
            if (active[i] == 1 && totalScore[i] < lowScore) {
                lowScore = totalScore[i];
                lowIndex = i;
            }
        }
        
        // Eliminate
        printf("Eliminated in Round %d: %s\n", r, contestants[lowIndex]);
        active[lowIndex] -= 1;
        //immunity for the semi finals
        if(r == 3){
        	active[0] += 1;
        }
        //Sort them up
		for (i = 0; i < N; i++) {
		    for (j = i + 1; j < N; j++) {
		        if (totalScore[j] > totalScore[i]) {
		        	// switching up things
		        	// 1. total scores
		            int temp1 = totalScore[i];
		            totalScore[i] = totalScore[j];
		            totalScore[j] = temp1;
					
					// 2. active status
		            int temp2 = active[i];
		            active[i] = active[j];
		            active[j] = temp2;
		            
		            // 3. contestants, strings
		            char temp3[20];
		            strcpy(temp3, contestants[i]);
		            strcpy(contestants[i], contestants[j]);
		            strcpy(contestants[j], temp3);
		            
		            // 4. round scores
		            int temp4 = roundScore[i];
		            roundScore[i] = roundScore[j];
		            roundScore[j] = temp4;
		        }
		    }
		}
        printf("Rearranging and printing the leaderboard . . .\n");
    }
    //printing leaderboards
    //printf("Rearranging and printing the leaderboard . . .\n");
    //Sort them up
	for (i = 0; i < N; i++) {
	    for (j = i + 1; j < N; j++) {
	        if (totalScore[j] > totalScore[i]) {
	        	// switching up things
	        	// 1. total scores
	            int temp1 = totalScore[i];
	            totalScore[i] = totalScore[j];
	            totalScore[j] = temp1;
				
				// 2. active status, if i == 0, then plus 1
				int temp2 = active[i];
	            active[i] = active[j];
	            active[j] = temp2;
	            
	            // 3. contestants, strings
	            char temp3[20];
	            strcpy(temp3, contestants[i]);
	            strcpy(contestants[i], contestants[j]);
	            strcpy(contestants[j], temp3);
	            
	            // 4. round scores
	            int temp4 = roundScore[i];
	            roundScore[i] = roundScore[j];
	            roundScore[j] = temp4;
	        }
	    }
	}
    for(int i = 0; i < N; i++){
    	printf("Contestants[%d] = %s ; active = %d ; roundScores = %d ; totalScores = %d\n", i, contestants[i], active[i], roundScore[i], totalScore[i]);
    }
	
	// the judges shall give the preference scores
	char judges[J][20] = {"Sanu", "Udit", "Alka", "Kavita"};
	for(int a = 0; a < J; a++){
		char fav[20];
		printf("Judge number %d, who is your favourite?", a+1);
		scanf("%s", fav);
		printf("Giving him extra 5 marks");
		for (i = 0; i < N; i++) {
		    if (strcmp(contestants[i], fav) == 0)
		        totalScore[i] += 5;
		}
		
	}
	//printf("Rearranging and printing the leaderboard . . .\n");
    //Sort them up
	for (i = 0; i < N; i++) {
	    for (j = i + 1; j < N; j++) {
	        if (totalScore[j] > totalScore[i]) {
	        	// switching up things
	        	// 1. total scores
	            int temp1 = totalScore[i];
	            totalScore[i] = totalScore[j];
	            totalScore[j] = temp1;
				
				// 2. active status, if i == 0, then plus 1
				int temp2 = active[i];
	            active[i] = active[j];
	            active[j] = temp2;
	            
	            // 3. contestants, strings
	            char temp3[20];
	            strcpy(temp3, contestants[i]);
	            strcpy(contestants[i], contestants[j]);
	            strcpy(contestants[j], temp3);
	            
	            // 4. round scores
	            int temp4 = roundScore[i];
	            roundScore[i] = roundScore[j];
	            roundScore[j] = temp4;
	        }
	    }
	}
    for(int i = 0; i < N; i++){
    	printf("Contestants[%d] = %s ; active = %d ; roundScores = %d ; totalScores = %d\n", i, contestants[i], active[i], roundScore[i], totalScore[i]);
    }
    
    // ---------- WILD CARD ----------
    printf("\nEnter wildcard entry contestant name, from those with active == 0 : ");
    char wildcard[20];
    scanf("%s", wildcard);

    // Identify finalists 
    int finalists[2], f = 0;
    for (i = 0; i < N; i++) {
        if (active[i] >= 1)
            finalists[f++] = i;
    }

    // Find wildcard index
    int wildIndex = -1;
    for (i = 0; i < N; i++) {
        if (strcmp(contestants[i], wildcard) == 0)
            wildIndex = i;
    }

    printf("\n--- FINALE ---\n");

    int final3[3] = {finalists[0], finalists[1], wildIndex};
    int finalScores[3] = {0};

    for (i = 0; i < 3; i++) {
        int s, u, a, k;
        printf("\nEnter scores for %s (Sanu Udit Alka Kavita): ", contestants[i]);
        scanf("%d %d %d %d", &s, &u, &a, &k);
        finalScores[i] = s + u + a + k;
    }

    // Determine winner, 1st runner-up, 2nd runner-up
    // Sort finalScores descending (simple bubble sort)
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (finalScores[j] > finalScores[i]) {
                int temp = finalScores[i];
                finalScores[i] = finalScores[j];
                finalScores[j] = temp;

                int temp2 = final3[i];
                final3[i] = final3[j];
                final3[j] = temp2;
            }
        }
    }

    printf("\n--- FINAL RESULTS ---\n");
    printf("WINNER: %s\n", contestants[final3[0]]);
    printf("FIRST RUNNER-UP: %s\n", contestants[final3[1]]);
    printf("SECOND RUNNER-UP: %s\n", contestants[final3[2]]);

    return 0;
}
