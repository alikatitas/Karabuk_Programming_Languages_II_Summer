/*Dizinin adresini ve eleman sayisini parametre olarak alan
ve dizinin içinde kaç tane tek sayi oldugunu 
döndüren recursive bir fonksiyon yaziniz. (Global degisken kullanmayiniz)*/

#include <stdio.h>

int hesapla(int ar[],int n){
	
	int sayac=0,result;
	
	int i=0;
	
	for(;i<n;i++){
		//a[4]={1,2,3,4}
		if(ar[i] %2== 1){
			sayac++;
		}
		else
		{
			return sayac + hesapla(ar,i);
		}
	}
	

}

int main(void){
	
	int eleman,n;
	printf("Dizinin eleman sayisini girin : ");
	scanf("%d",&n);
	
	int i,ar[n];
	for(i=0;i<n;i++){
		printf("Dizinin %d. elemani : ",i+1);
		scanf("%d",&eleman);
		ar[i]= eleman;
	}
	
	printf("Dizide toplam %d tane tek sayi vardir",hesapla(ar,n));
}
