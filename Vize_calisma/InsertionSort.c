#include <stdio.h>

//Insertion Sort

void insertionSort(int dizi[],int n){
	int i,j,k;
	for(i=1;i<n;i++){
		k=dizi[i];
		for(j=i-1;j>=0 && k<=dizi[j];j--){
			dizi[j+1]=dizi[j];
		}
			dizi[j+1]=k;
	}
}

int main( )
{
int i,boyut;
int arr[boyut];
printf("Dizi boyutu girin : ");
scanf("%d",&boyut);

printf("Dizinin elemanlarini girin : \n ");

for(i=0;i<boyut;i++){
	printf("Dizinin %d elemani : ", i+1);
	scanf("%d",&arr[i]);
}

insertionSort(arr,boyut);

printf("Dizinin elemanlarinin sirali hali : \n");
for(i=0;i<boyut;i++){
	printf("%3d",arr[i]);
}
	
	
return 0;
}
