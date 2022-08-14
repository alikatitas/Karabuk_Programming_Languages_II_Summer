#include <stdio.h>

//Selection Sort

void SelectionSort(int dizi[],int n){
	int i,j,index,min;
	
	for(i=0;i<n-1;i++){
		min=dizi[n-1];
		index=n-1;
		
		for(j=i;j<n-1;j++){
		if(dizi[j]<min)	{
			min=dizi[j];
			index=j;
		}
		}
		dizi[index]=dizi[i];
		dizi[i]=min;
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

SelectionSort(arr,boyut);

printf("Dizinin elemanlarinin sirali hali : \n");
for(i=0;i<boyut;i++){
	printf("%3d",arr[i]);
}
	
	
return 0;
}
