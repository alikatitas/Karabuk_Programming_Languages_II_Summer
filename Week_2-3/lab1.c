/*Klavyeden ögrenci sayisi (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanimlanacak “hesapla” fonksiyonuna gönderen 
bir “main” fonksiyonu hazirlayiniz. 
“hesapla” fonksiyonu kendisine gelen ögrenci sayisi kadar notu klavyeden okuyarak 100 elemanli bir diziye kaydetmeli ve 
geçme notuna göre kaç tane ögrencinin dersten kaldigini bularak fonksiyondan geri döndürürken, 
sinif ortalamasini da ekrana yazdirmalidir. 
Buna göre asagida verilen alanlara “main” ve “hesapla” fonksiyonlarini yaziniz*/

#include <stdio.h>

#define gecmeNotu 50

int Hesapla(int ogrSay, int dersNotu, int ogrenciler[]){
	
int i,derstenKalan=0;
	
for(i=0;i<ogrSay;i++){
ogrenciler[i]	= dersNotu;
}

for(i=0;i<ogrSay;i++){
printf("%d\n",ogrenciler[i]);
}

return derstenKalan;


}



int main(void){
	
	int i,ogrSay,dersNotu;
	
	printf("Ogrenci Sayisini Girin : \n");
	scanf("%d",&ogrSay);
	
	int ogrenciler[ogrSay];
	
	for(i=1;i<=ogrSay;i++){
	if(ogrSay>100){
	printf("Ogrenci sayisi 100\'den fazla olamaz\n");	
	break;
	}else
	{
	printf("%d. Ogrencinin Ders Gecme Notunu Girin :  ",i);
	scanf("%d",&dersNotu);	
	}
	
	}
	printf("Dersten Kalan Ogrenci Sayisi : %d\n", Hesapla(ogrSay,dersNotu,ogrenciler));


	return 0;
}
