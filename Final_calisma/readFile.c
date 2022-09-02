#include <stdio.h>

int main(void){
	
	int hesapNo;
	char ad[40];
	double bakiye;
	
	FILE *file=fopen("musteri.dat","r");
	
	if(file==NULL){
		printf("File can not be opened !");
	}else{
		printf("%-10s%-13s%s\n","Hesap No","Ad","Bakiye");
		fscanf(file,"%&d%s%lf",&hesapNo,ad,&bakiye);
		
		while(!feof(file)){
			printf("%-10d%-13s%7.22f\n",hesapNo,ad,bakiye);
			fscanf(file,"%&d%s%lf",hesapNo,ad,bakiye);
		}
		fclose(file);
	}
	
	return 0;
}
