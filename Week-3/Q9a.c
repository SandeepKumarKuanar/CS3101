/*

  Corporate R&D bodies provide incentives to employees if they have papers accepted at such venues, as that often boosts the global reputation of the corporate body.  Implement a scheme to decide on the Incentive given the Conference Rank: using a) if-else-if

*/


#include<stdio.h>
int main(){
  char want[2];
  scanf("%s", want);
  //printf("500 USD + funds for conference travel, accommodation, and registration to you for %s\n", want);
  if(want == "A*"){
    printf("500 USD + funds for conference travel, accommodation, and registration to you for %s\n", want);
  } else if(want == "A"){ 
    printf("300 USD + funds for conference travel and accommodation to you for %s\n", want);
  } else if(want == "B"){ 
    printf("150 USD + funds for conference travel to you for %s\n", want);
  } else if(want == "C"){ 
    printf("100 USD only to you for %s\n", want);
  }
  return 0;
}
