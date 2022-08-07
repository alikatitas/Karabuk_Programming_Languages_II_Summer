/*Main fonksiyonu içerisinde verilen sayinin basamaklarini toplamini rekürsif bir fonksiyon kullanarak 
bulunuz*/

#include <stdio.h>

int basamakToplam(int sayi){
	if(sayi != 0)
	return sayi % 10 + basamakToplam(sayi/10);
	else
	return 0;
}

int main(void){
int sayi,sonuc;
printf("Bir sayi girin : ");
scanf("%d",&sayi);
sonuc=basamakToplam(sayi);
printf("%d sayisinin basamaklari toplami %d dir",sayi,sonuc);
return 0;
}

