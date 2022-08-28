#include <stdio.h>
#include <stdlib.h>

struct data{
	int num;
	char info[20];
};

int main(void){

	struct data *d;
	int i,n;
	
	printf("Kayit sayisinin girin : \n");
	scanf("%d",&n);
	
	//memory allocation
	d=(struct data *)malloc(n * sizeof(struct data));
	
	for(i=0;i<n;i++){
	printf("Struct içindeki %d. kaydin Numara ve Bilgi alanlarini girin : \n",i+1);
	scanf("%d %s",&(d+i)->num, (d+i)->info);
	}
		
	//Display
	
	for(i=0;i<n;i++){
		printf("Numara :%d\t Bilgi :%s\n",(d+i)->num,(d+i)->info );
	}
	
	return 0;
}

