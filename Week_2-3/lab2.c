/*
Boy ve kilo bilgisini alarak vücut kitle indeksini hesaplayan kitleIndeks isimli bir fonksiyon yaziniz. Bu fonksiyon asagida 
verilen tabloya göre deger döndürmektedir. Yazdiginiz fonksiyonu main fonksiyonunda çagirarak kullanin ve bir 
program yaziniz. Programin örnek çalismasi sekilde verildigi gibi olmalidir. Vücut kitle indeksi hesabi asagida verilmistir.
*/

#include <stdio.h>

float kitleIndex (float kilo, float boy){

float Index = kilo / (boy* boy);
printf("Kitle Index'siniz : %.2f\n", Index);

	// 0-18 => Zayif
	// 19-25 => Normal
	// 26-30 => Kilolu
	// >30 => Obez
	
if (Index >=0.00 && Index <=18.00){
	return 1;
}else if(Index >=18.00 && Index <=25.00){
	return 2;
}else if(Index >=25.00 && Index <=30.00){
	return 3;
}else if(Index >=30.00){
	return 4;
}

}

int main(void){
	
	float kilo,boy;
	int sonuc;	
	
	printf("::::: Kitle Index Programi :::::\n");
	printf("Lutfen Kilonuzu Giriniz : ");
	scanf("%f",&kilo);
	printf("Lutfen boyunuzu giriniz : ");
	scanf("%f",&boy);

	sonuc = kitleIndex(kilo,boy);
	
	switch(sonuc){
		case 1:
			printf("Zayifsiniz...");
			break;
		case 2:
			printf("Normal Kilodasiniz...");
			break;
		case 3:
			printf("Kilolusunuz...");
			break;
		case 4:
			printf("Obezsiniz...");
			break;
	}
	

	
	return 0;
}
