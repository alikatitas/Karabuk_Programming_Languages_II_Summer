#include <stdio.h>


struct musteri{
	int hesapNo;
	char soyad[40];
	char ad[25];
	double bakiye;
};

int main(void){
	
	int i;
	struct musteri bosMusteri = {
		0," "," ",0.0
	};	
	FILE *file = fopen("musteri.dat","w");
	if(file==NULL){
		printf("File can not be opened");
	}else{
		for(i=1;i<=100;i++){
			fwrite(&bosMusteri,sizeof(struct musteri),1,file);
		}
		fclose(file);
	}
	
	
	
	
return 0;	
}

