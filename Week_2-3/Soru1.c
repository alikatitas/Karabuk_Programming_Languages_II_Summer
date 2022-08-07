/*Main fonksiyonu içerisinde verilen bir dogal sayiya kadar olan (bu sayi dahil) tüm sayilarin 
toplamini rekürsif bir fonksiyon kullanarak hesaplayaniz. 9 için => 1+2+3+4+5+6+7+8+9*/

#include <stdio.h>

int Toplam(int sayi){
if (sayi != 0)
return sayi + Toplam(sayi-1);
else
	return sayi;

}


int main(void){
int sayi;
printf("Bir sayi girin : ");
scanf("%d",&sayi);
printf("Toplam = %d",Toplam(sayi));

return 0;
}

