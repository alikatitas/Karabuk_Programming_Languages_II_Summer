#include <stdio.h>

void my_recursive_function(int n){
 if(n == 0)
 return;
 printf("%d ",n);
 my_recursive_function(n-1);
}

/*
sayi=7 için
7 6 5 4 3 2 1 seklinde sayilari tersten 0 a kadar yazdirir, 0 oldugunda return ettigi icin yazdirmaz 
*/
void main(){
 my_recursive_function(7);
}
