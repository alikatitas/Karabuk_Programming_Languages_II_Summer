 #include <stdio.h>
 
 void fun(int n){
 if (n == 0) // base statement 0 a kadar return yapiyor
 return;
 fun(n/2);
 printf("%d", n%2);
}
 /*
 0 -> 2 -> 4 -> 8 ->16  (25) ->32
 */
 
 int main(void){
	fun(25);
	 return 0; 
 }
