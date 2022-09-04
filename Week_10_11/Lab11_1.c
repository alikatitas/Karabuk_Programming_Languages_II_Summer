#include <stdio.h>
#include <stdlib.h>

/*Ögrenci bilgilerinden (ögrenci no, isim, bölüm) olusan sirali erisimli bir
dosya olusturan ve bu dosya içerisinde isme göre arama yapan programi
yaziniz. Program menü seklinde hazirlanmalidir. Dosya olusturma, kayit
ekleme gibi gerekli tüm fonksiyonlar yazilmalidir.*/

struct student{
	int no;
	char name[20];
	char departmentName[20];
	struct student *next;
};

typedef struct student std;
std *head, *prevNode;

int kayitAra(char *aranan){
	std *p;
	p=head;
	
	prevNode=head;
	while(p->next==NULL){
		p=p->next;
		if(strcmp(p->name == aranan) >= 0) break;
		prevNode=p;	
		}
	
}

void yeniKayit(std *newStudent){
	std *p;
	p=head;
	int i,ogrSayisi;
	FILE *file =fopen("students.txt","w");
	
	if(file==NULL){
		printf("Dosya olusturulamadi");
	}else{
	printf("Kayit Edilecek Ogrenci Sayisini Girin : ");
	scanf("%d",&ogrSayisi);
	
	printf("Ogrenci Bilgilerini Girin :\n");
	
	for(i=0;i<ogrSayisi;i++){
		printf("%d. Ogrencinin Numarasi : ",i+1);
		scanf("%d",&newStudent->no);
		printf("%d. Ogrencinin Ismi : ",i+1);
		scanf("%s",newStudent->name);
		printf("%d. Ogrencinin Departmani : ",i+1);
		scanf("%s",newStudent->departmentName);	
	}
	
		while(!feof(file)){
		p=p->next;
		p->next=newStudent;
		fprintf(file,"%d %s %s\n",&(newStudent+i)->no, (newStudent+i)->name, (newStudent+i)->departmentName);
	}
	
}
	fclose(file);
}

void menu(){
	printf("Ogrenci Bilgileri :\n" 
	"1-Dosya Olustur ve Kayit Ekle\n"
	"2-Ogrenci Isminden Kayit Ara\n");
}

int main(void){
	
	int secim;
	menu();
	printf("Seciminizi Yapin :");
	scanf("%d",&secim);
	
	std *newStd;
	newStd=(std *)malloc(sizeof(std));
	
		switch(secim){
		case 1:
			yeniKayit(&newStd);
			break;
		case 2:
			kayitAra(head);
			break;
	}
	return 0;
}
