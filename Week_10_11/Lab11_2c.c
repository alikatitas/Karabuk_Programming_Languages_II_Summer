#include <stdio.h>

/*Ögrenci bilgilerinden (ögrenci no, isim, bölüm) olusan rastgele erisimli
bir dosya olusturan ve bu dosya içerisinde ögrenci no’ya göre arama
yapan programi yaziniz. Program menü seklinde hazirlanmalidir. Dosya
olusturma, kayit ekleme gibi gerekli tüm fonksiyonlar yazilmalidir.*/

struct student{
	int no;
	char name[20];
	char departmentName[20];
};

int main(void){
	int i;
	//dosya olusturma
	struct student bosStudent={
		0,"",""
	};
	
	FILE *file;
	if((file=fopen("student.dat","w"))==NULL){
		printf("Dosya olusturulamadi");
	}else{
		for(i=1;i<=100;i++){
			fwrite(&bosStudent,sizeof(struct student),1,file);
		}
		fclose(file);
	}

	
	//dosya yazma
	if((file=fopen("student.dat","r+"))==NULL){
		printf("Dosya acilamadi");
	}else{
		printf("Ogrenci no gir [1-100 arasi deger]"
		"Girisi sonlandirmak icin 0 a basin"
		);
		scanf("%d",&bosStudent.no);
		while(bosStudent.no != 0){
			printf("Isim ve Departman Adi girin : ");
			fscanf(stdin,"%s%s",bosStudent.name, bosStudent.departmentName);
			
			fseek(file,(bosStudent.no-1)*sizeof(struct student),SEEK_SET);
			fwrite(&bosStudent,sizeof(struct student),1,file);
			
			printf("Ogrenci No gir : ");
			scanf("%d",&bosStudent.no);
		}
		fclose(file);
		
	}
	
	//dosyadan bilgi okuma ve kayit arama
	int stdNo;
	if((file=fopen("student.dat","r"))==NULL){
		printf("Dosya acilamadi");
	}else{
		printf("%-16s%-11s","Isim","Departman Adi");
		while(!feof(file)){
			fread(&bosStudent,sizeof(struct student),1,file);
			printf("Arandiginiz Ogrencinin Numarasini Girin : ");
			scanf("%d",&stdNo);
			if(bosStudent.no == stdNo){
				printf("%-16s%-11s",bosStudent.name,bosStudent.departmentName);
			}
		}
		}
		fclose(file);
	
	
	return 0;
}
