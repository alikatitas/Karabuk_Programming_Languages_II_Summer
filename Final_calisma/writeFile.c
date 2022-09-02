#include <stdio.h>

//file operations 
int main(void){
	//fields
	int hesapNo;
	char ad[30];
	double bakiye;
	
	FILE *file=fopen("musteri.dat","w");
	
	if(file==NULL){
		printf("File can not be opened");
	}else
	{
		printf("Enter Account No, Name and Amount \n");
		printf("Enter EOF for end");
		scanf("%d%s%lf",&hesapNo,ad,&bakiye);
		
		while(!feof(stdin)){
			fprintf(file,"%d %s %.2f \n", hesapNo,ad,bakiye);
			scanf("%d%s%lf",&hesapNo,ad,&bakiye);
		}
		fclose(file);
	}
	
	return 0;
}
