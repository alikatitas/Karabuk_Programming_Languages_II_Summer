/*Main fonksiyonu içerisinde verilen iki pozitif sayiyi kullanarak bu sayilarin en büyük ortak bölenini rekürsif 
bir fonksiyon kullanarak bulunuz.
*/

#include <stdio.h>

int EbobBul(int sayi1,int sayi2){
	while(sayi1 != sayi2){
		if(sayi1>sayi2)
		return EbobBul(sayi1-sayi2,sayi2);
		
		else
		return EbobBul(sayi1,sayi2-sayi1);
	}
}

int main(void){
	int sayi1,sayi2,EBOB;
	printf("Sayilari giriniz : ");
	scanf("%d%d",&sayi1,&sayi2);
	EBOB=EbobBul(sayi1,sayi2);
	printf("Ebob : %d",EBOB);
}
