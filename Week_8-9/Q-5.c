#include <stdio.h>
#define MAX 4

enum sanfoundry{
	a, b=3, c //a=0, b=3, c=4
};

int main(void){
	if(MAX !=c){ // MAX = c
		printf("hello");
	}else{
		printf("welcome"); // so print welcome
	}
return 0;
}
