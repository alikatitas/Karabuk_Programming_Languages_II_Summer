#include <stdio.h>

enum State {
	WORKING=0,
	FAILED, //1
	FREEZED //2
};

enum State currState =2; // current is FREEZED

enum State findState(){
	return currState;
}

int main(void){
	
(findState()==WORKING) ? printf("WORKING") : printf("NOT WORKING"); // currState=FREEZE so print NOT WORKING
	
return 0;
}
