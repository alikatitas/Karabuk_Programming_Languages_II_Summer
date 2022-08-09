#include <stdio.h>

int toplam(int n){
if (n == 1)
return n;
else 
return (n + toplam(n - 1));
}

/* Output is :
sayi=6 için
6+(toplam5) => 6+5+toplam(4) => 6+5+4+toplam(3) => 6+5+4+3+toplam(2) => 6+5+4+3+2+1 => 21


*/
void main(void){
int sayi = 6;
printf("Sonuc = %d", toplam(sayi));
}

