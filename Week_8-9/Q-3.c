#include <stdio.h>

int main(void){
	
enum result {
	pass, //0
	fail //1
};

enum result s1,s2;
s1=pass; //s1=0
s2=fail; //s2=1

printf("%d",s1); //print 0
return 0;
}
