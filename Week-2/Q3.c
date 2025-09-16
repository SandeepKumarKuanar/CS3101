/*

	Consider a secret agent service with four secret agents: 002, 003, 005, and 007. The agents do not know each other, and they interact directly with the head of the organization (main()). The head interacts (function calls) with each agent separately, and in response, the agent prints his/her passcode (on the console). 

	The passcode of agent 00i (i = 2, 3, 5, 7) is an integer divisible by i. Right after the response, each agent updates the passcode such that it remains divisible by i (the updation scheme is known only to the agent and the head). There can be multiple such interactions. Note that the passcode of one agent is not visible to any other agent. 


	The head can only view it upon the interaction (after which it is updated by the agent), but can not access it directly (the head knows that it is divisible by i for a sanity check, but does not know it exactly before the interaction). Using C and an appropriate storage class (variable type), implement this scheme. You may choose your own initial passcode for each agent i such that it is divisible by i.

*/

#include<stdio.h>
extern int code002;

int agent_002(){
	printf("this me, %d\n", code002);
	code002 += 2;
}


//declaring the boss 
int main(){
	// he would just call them up
	agent_002();
	printf("%d\n", code002);
	return 0;
}


