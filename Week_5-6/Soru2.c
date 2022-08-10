#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n;
	printf("Dizinin eleman sayisini girin : ");
	scanf("%d",&n);
	
	int *dizi[n];
	*dizi = (int *)malloc(n *sizeof(int));
	
	for(i=0;i<n;i++){
		printf("%d. Elemani Girin : ", i+1);
		scanf("%d", dizi+i);
	}
	
	//Display of array
	
		for(i=0;i<n;i++){
		printf("Dizinin %d. Elemaninin Degeri: %d\n", i+1, *(dizi+i));
	}
	
}
