#include <stdio.h>
#include <stdlib.h>

/*Ögrenci bilgilerinden (ögrenci no, isim, bölüm) olusan sirali erisimli bir
dosya olusturan ve bu dosya içerisinde isme göre arama yapan programi
yaziniz. Program menü seklinde hazirlanmalidir. Dosya olusturma, kayit
ekleme gibi gerekli tüm fonksiyonlar yazilmalidir.*/

//dosya yazma
void dosyaYaz(){
	int no;
	char name[20];
	char departmentName[20];
	//dosyaya yazma
	FILE *file;
	if((file=fopen("students.dat","w"))==NULL){
		printf("Dosya olusturulamadi");
	}else{
		printf("Ogrenci No, Isim ve Bolum bilgilerini girin : \n");
		printf("Veri girisini bitirmek icin 0 girin : \n");
		scanf("%d%s%s",&no,name,departmentName);
		
		while(no != 0 ){
			fprintf(file,"%d%s%s\n",no,name,departmentName);
			scanf("%d%s%s",&no,name,departmentName);
		}
		printf("Dosya olusturma islemi tamamlandi..");
	}
}

//kayit ara
void ara(char *aranan){
	int no;
	char name[20];
	char departmentName[20];
	FILE *file;
	if((file=fopen("students.dat","r"))==NULL){
		printf("Dosya acilamadi");
	}else{
		fscanf(file,"%d%s%s",&no,name,departmentName);
		if(no == aranan)
		printf("Kayit bulundu");
		else
		printf("Kayit bulunamadi");
		}
	}

//menu
void menu(){
	printf("Ogrenci Programi\n"
	"1-Kayit Ekle\n"
	"2-Ogrenci Noya gore Arama Yap\n"
	"3-Cikis");
}

int main(void){
	menu();
	int secim;
	printf("\nSeciminizi Yapin : ");
	scanf("%d",&secim);
	switch(secim){
		case 1:
			dosyaYaz();
			break;
		case 2:
			printf("Aradiginiz ogrencininin numarasini yazin : ");
			int stdNo;
			scanf("%d",&stdNo);
			ara(stdNo);
			break;
		case 3:
			printf("Programdan cikildi..");
			exit(0);
			break;
	}
	
	return 0;
}
