/*Klavyeden �grenci sayisi (en fazla 100) ve ders ge�me notunu alarak bu bilgileri tanimlanacak �hesapla� fonksiyonuna g�nderen 
bir �main� fonksiyonu hazirlayiniz. 
�hesapla� fonksiyonu kendisine gelen �grenci sayisi kadar notu klavyeden okuyarak 100 elemanli bir diziye kaydetmeli ve 
ge�me notuna g�re ka� tane �grencinin dersten kaldigini bularak fonksiyondan geri d�nd�r�rken, 
sinif ortalamasini da ekrana yazdirmalidir. 
Buna g�re asagida verilen alanlara �main� ve �hesapla� fonksiyonlarini yaziniz*/

#include <stdio.h>

int hesapla(ogrSay,gecme){
	int i,ortalama,toplam=0,not[ogrSay],sonuc=0;
	
	for(i=0;i<ogrSay;i++){
	printf("%d. Ogrencisinin Notunu Girin : ",i+1);
	scanf("%d",&not[i]);
	if(not[i]>gecme){
		sonuc++;
	}
	}	
	
	for(i=0;i<ogrSay;i++){
		toplam += not[i];
	}
	
	ortalama = toplam/ogrSay;
	
	printf("Ortalama : %d\n",ortalama);
	return sonuc;
	
}



int main(void){
	
	int ogrSay, gecme, sonuc;
	printf("Ogrenci sayisini girin : ");
	scanf("%d",&ogrSay);
	printf("Gecme Notunu girin : ",gecme);
	scanf("%d",&gecme);
	sonuc=hesapla(ogrSay,gecme);
	printf("Gecen sayisi : %d kisidir.",sonuc);
	return 0;
}
