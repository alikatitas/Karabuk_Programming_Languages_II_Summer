#include <stdio.h>
#include <string.h>

//Bubble Sort
int swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubbleSort(int ar[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){
				swap(&ar[j],&ar[j+1]);
			}
		}
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

bubbleSort(arr,boyut);

printf("Dizinin elemanlarinin sirali hali : \n");
for(i=0;i<boyut;i++){
	printf("%3d",arr[i]);
}

return 0;
}
