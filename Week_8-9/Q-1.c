#include <stdio.h>

enum day{
	sunday=1,
	tuesday, //2
	wednesday, //3
	thursday, //4
	friday, //5
	saturday //6
};

int main(void){
	
	enum day d=thursday; //4
	printf("The day number stored in d is %d", d); //result is 4
	
return 0;
}


