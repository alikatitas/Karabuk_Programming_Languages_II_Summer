#include <stdio.h>

int main(void){
	
	int secim, hesapNo;
	double bakiye;
	char ad[40];
	
	FILE *file=fopen("musteri.dat","r");
	if(file==NULL){
		printf("file can not be opened");
	}else
	{
		printf("Secim yapin\n"
		"1-Hesapta Para olmayan hesaplar\n"
		"2-Borclu olan hesaplar\n"
		"3-Hesapta para olan hesaplar\n"
		"4-Cikis\n");
		scanf("%d",&secim);
		
		while(secim !=4){
			fscanf(file,"%d%s%lf",&hesapNo,ad,&bakiye);
			switch(secim){
				case 1:
					printf("Hesapta Para olmayan hesaplar");
					while(!feof(file)){
						if(bakiye==0){
							printf("%-10d%-13s%7.2f\n",hesapNo,ad,bakiye);
							fscanf(file,"%d%s%lf",&hesapNo,ad,&bakiye);
						}
					break;
				case 2:
					printf("Borclu olan hesaplar");
					while(!feof(file)){
						if(bakiye<0){
							printf("%-10d%-13s%7.2f\n",hesapNo,ad,bakiye);
							fscanf(file,"%d%s%lf",&hesapNo,ad,&bakiye);
						}
					}
					break;
				case 3:
					printf("Hesapta para olan hesaplar");
					while(!feof(file)){
						if(bakiye>0){
							printf("%-10d%-13s%7.2f\n",hesapNo,ad,bakiye);
							fscanf(file,"%d%s%lf",&hesapNo,ad,&bakiye);
						}
					}
					break;	
			}
			rewind(file);
			printf("\n?");
			scanf("%d",&secim);
		}
		printf("Program sonlandi");
		fclose(file);

	return 0;
}
}
}
