/*
S5. Bir dairenin alanini hesaplayan programi yazin. 
Kisitlar:
• Dairenin yariçapi kullaniciya sorularak klavyeden girilmelidir ve fonksiyon main fonksiyounu 
içerisinden çagrilmalidir.
• Fonksiyon prototipi: float square (const int r)
• Pi sayisi 3.14 dür ve programin basinda sabit olarak tanimlanmalidir.
• Sonuç ekrana yazdirilirken küsürat ‘2’ olacak sekilde olmalidir. 
*/

/*
Output
Dairenin Alanini Hesaplayan Program
-----------------------------------
Dairenin yaricapini girin :....
*/
#include <stdio.h>

#define PI 3.14 //Pi sayisi 3.14 dür ve programin basinda sabit olarak tanimlanmalidir.

float square(const int);

int main(void) {

	int r;
	printf("Dairenin Alanini Hesaplayan Program\n");
	printf("-----------------------------------\n");
	printf("Dairenin yaricapini girin : ");
	scanf("%d", &r); //Dairenin yariçapi kullaniciya sorularak klavyeden girilmelidir
	printf("%.2f", square(r)); //fonksiyon main fonksiyounu içerisinden çagrilmalidir. Sonuç ekrana yazdirilirken küsürat ‘2’ olacak sekilde olmalidir. 

	return 0;
}

float square(const int r) { //Fonksiyon prototipi: float square (const int r)
	// Dairenin alanÄ± A= PI * r * r
	float alan;
	alan = PI * r * r;
	return alan;
}
