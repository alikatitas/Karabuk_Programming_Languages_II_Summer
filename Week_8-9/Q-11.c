#include <stdio.h>

enum sanfoundry{
	a=1, b //b=2
};

enum sanfoundry1{
	c,d //c=0, d=1
};

int main(void){
	
	enum sanfoundry1 s1=c; //s1=0
	enum sanfoundry1 s=a; //s=1
	enum sanfoundry s2=d; // s2=1
	
	printf("%d\n",s);
	printf("%d\n",s1);
	printf("%d\n",s2);


return 0;
}
