#include <stdio.h>

enum sanfoundry{
	a,b,c=5  // a=0, b=1, c=5
};

int main(void){
	
	enum sanfoundry s;
	int b=10; //b is a local variable and not include enum struct
	printf("%d",b);

return 0;
}
