/*Klavyeden ögrenci sayisi (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanimlanacak “hesapla” fonksiyonuna gönderen 
bir “main” fonksiyonu hazirlayiniz. 
“hesapla” fonksiyonu kendisine gelen ögrenci sayisi kadar notu klavyeden okuyarak 100 elemanli bir diziye kaydetmeli ve 
geçme notuna göre kaç tane ögrencinin dersten kaldigini bularak fonksiyondan geri döndürürken, 
sinif ortalamasini da ekrana yazdirmalidir. 
Buna göre asagida verilen alanlara “main” ve “hesapla” fonksiyonlarini yaziniz*/

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
