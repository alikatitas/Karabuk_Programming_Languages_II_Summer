#include <stdio.h>

enum sanfoundry{
	c=0,
	d=10,
	h=20,
	s=3
} a;

int main(void){
	
	a=c; // a=0 and is integer. in 32 platforms integer is 2 bit.
	printf("Size of enum variable = %d bytes", sizeof(a));

return 0;
}
