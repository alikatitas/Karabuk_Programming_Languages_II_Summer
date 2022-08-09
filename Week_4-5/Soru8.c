#include <stdio.h>

int recursive_sum_of_digits(int n){
 if(n == 0)
 return 1;
 return n % 10 + recursive_sum_of_digits(n/10);
}


void main(){
 int n = 1201;
 int ans = recursive_sum_of_digits(n);
 printf("%d",ans);
}
