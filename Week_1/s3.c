/*
Output:
start_t degeri :0
end_t degeri :78
Dongu calisma suresi (saniye) : 0.078
*/

#include <stdio.h>
#include <time.h> //Time kutuphanesi dosyaya import edilmistir

int main(void) {
	clock_t start_t, end_t; //time kutuphanesi icerisindeki clock_t stackinden start_t ve end_t isimli iki degisken tanimlanmistir. 

	register int id1, id2; // id1 ve id2 isimli degiskenler tanimlanmistir

	start_t = clock(); // time kutuphanesindeki hazir fonksiyonlardan clock() fonksiyonu kullanilmis ve fonksiyondan gelen deger end_t ye atanmistir.

	for (id1 = 0; id1 < 2000000; id1++) // id1 ve id2 arada sure gecmesi icin bos for dongusune sokulmustur.
		{
		for (id2 = 0; id2 < 100; id2++)
		{

		}
	}
	end_t = clock();  // time kutuphanesindeki hazir fonksiyonlardan clock() fonksiyonu kullanilmis ve fonksiyondan gelen deger end_t ye atanmistir.

	printf("start_t degeri :%lu\n", start_t); //start_t degeri print edilmistir
	printf("end_t degeri :%lu\n", end_t); //end_t degeri print edilmistir
	printf("Dongu calisma suresi (saniye) : %.3f", (double)(end_t - start_t) / CLOCKS_PER_SEC); /*end_t den start_t cikarilmis ve sonuc Clocks_Per_Sec e bolunerek 
																							 saniye cinsine cevrilmis ve double ile de casting yapilarak
																							 ondalik kismi 3 haneli olarak print edilmistir.
																							 */




	return 0;
}
