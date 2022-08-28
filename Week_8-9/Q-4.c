#include <stdio.h>

enum example{
	a=1, b,c //a=1, b=2, c=3
};
enum example example1=2; //example1=b
enum example answer(){
	return example1; //answer function will return 2 and value is b
}

int main(void){
	(answer()==a) ? printf("yes") : printf("no"); // value is b so print no
return 0;
}
