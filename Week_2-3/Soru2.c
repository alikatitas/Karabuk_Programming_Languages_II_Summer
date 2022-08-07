// Girilen dizideki en büyük elemani bulan programi C dilinde Rekürsif olarak yaziniz.

#include <stdio.h>

int enBuyukBul(int a[], int n){
int i;

if(n==1) //base
return a[0];
else
i=enBuyukBul(a,n-1);

if(i>a[n-1])
return i;
else
return a[n-1];

}

int main(void){
	int boyut;
	printf("Dizinin eleman sayisi : ");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	
	int i;
	for(i=0;i<boyut;i++){
	printf("Dizinin %d. elemani : ",i+1);
	scanf("%d",&dizi[i]);
	}
	
	printf("%d",enBuyukBul(dizi,boyut));
	getchar();
	
	return 0;
}
