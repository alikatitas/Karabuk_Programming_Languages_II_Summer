#include <stdio.h>
#include <stdlib.h>

int buyukBul (int *arr, int n){
	
		int i,buyuk;
		
		for(i=0;i<n;i++){
		if (*arr > *(arr+i))
		{
			buyuk = *arr;
		}else{
			*arr = *(arr+i);
		}
	}
		return buyuk;
}

int main(void){
	
	int i,n,buyuk;
	
	printf("Toplam Eleman sayisini girin :");
	scanf("%d",&n);
	
	int *arr;
	arr = (int *)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
	printf("%d. eleman :" , i+1);
	scanf("%d",arr+i);
	
    }
	//En büyük degeri bul

	printf("%d", buyukBul(arr,n));
	
	
	free(arr);
	return 0;
}
