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
		printf("Judge number %d, who is your favourite?\n", a+1);
		scanf("%s", fav);
		printf("Giving him extra 5 marks\n");
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

    // Find wildcard index and make it alive
    for (i = 0; i < N; i++) {
        if (strcmp(contestants[i], wildcard) == 0)
            active[i] += 1;
    }
    //Sort them up on the basis of active or not
	for (i = 0; i < N; i++) {
	    for (j = i + 1; j < N; j++) {
	        if (active[j] > active[i]) {
	        	// switching up things
	        	// 1. active status, if i == 0, then plus 1
	        	int temp2 = active[i];
	            active[i] = active[j];
	            active[j] = temp2;
	            
				// 2. total scores
				int temp1 = totalScore[i];
	            totalScore[i] = totalScore[j];
	            totalScore[j] = temp1;
	            
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
	printf("\nAfter introducing the wild card, now the leader board is\n");
    for(int i = 0; i < N; i++){
    	printf("Contestants[%d] = %s ; active = %d ; roundScores = %d ; totalScores = %d\n", i, contestants[i], active[i], roundScore[i], totalScore[i]);
    }

	// ---------- FINALE EVENT ----------
    printf("\n--- FINALE ---\n");
    // locking in final scores
    for (i = 0; i < N; i++) {
    	if(active[i] >= 1){
    		int s, u, a, k;
			printf("\nEnter scores for %s (Sanu Udit Alka Kavita): ", contestants[i]);
		    scanf("%d %d %d %d", &s, &u, &a, &k);
		    roundScore[i] = s + u + a + k;
		    totalScore[i] += roundScore[i];
    	}
    	
    }
    //Sort them up
	for (i = 0; i < N; i++) {
	    for (j = i + 1; j < N; j++) {
	        if (totalScore[j] > totalScore[i] && active[i] >= 1 && active[j] >= 1) {
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
    
    // ---------- FINAL RESULTS ---------- 
    printf("The WINNER OF EVENT IS -> Contestants[%d] = %s ; with Total Scores = %d\n", 0, contestants[0], totalScore[0]);
    printf("The RUNNERS-UP OF EVENT IS -> Contestants[%d] = %s ; with Total Scores = %d\n", 1, contestants[1], totalScore[1]);
    printf("The 2ND RUNNERS-UP OF EVENT IS -> Contestants[%d] = %s ; with Total Scores = %d\n", 2, contestants[2], totalScore[2]);
    
    return 0;
}
