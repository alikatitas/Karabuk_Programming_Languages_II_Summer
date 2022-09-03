#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Disaridan aldigi isimleri alfabetik sira ile listeleyen, 
listeye yeni dügüm ekleyen, 
belirtilen dügümü silen ve dügümdeki en uzun ismi bulan tek
bagli liste uygulamasi.*/

struct personel{
	char adi[21]; //data
	struct personel *next; //next
};

typedef struct personel node; //node
node *head, *newNode, *prevNode, *deleted;
//head ant tail inf

void ara(char *aranan){
node *p;
p=head;

prevNode=head;

while(p->next != NULL){
	p=p->next;
	if(strcmp(p->adi,aranan)>=0) break;
	prevNode=p;
}	
}

void ekle(char *s){
	newNode=(node *)malloc(sizeof(node));
	strcpy(newNode->adi,s);
	ara(newNode->adi);
	newNode->next =prevNode->next;
	prevNode->next=newNode;
}

void sil(char *s){
	ara(s);
	deleted=prevNode->next;
	prevNode->next=deleted->next;
	free(deleted);
}

void listele(void){
	node *p;
	p=head;
	p=p->next;
	
	while(p !=NULL){
		printf("%s\n",p->adi);
		p=p->next;
	}
}

void enUzunBul(void){
	node *p,*enuzun;
p=head;
p=p->next;
enuzun=p;

while(p!=NULL){
	if(strlen(p->adi) >= strlen(enuzun->adi)){
		enuzun=p;
	}
		p=p->next;
	}
	printf("\nEn uzun :%s Uzunluk:%d",enuzun->adi, strlen(enuzun->adi));
	getchar();
}


int main(void){
char sec;
char s[21];
head=(node *)malloc(sizeof(node));
strcpy(head->adi,"listenin basi");
head->next=NULL;

do{
	system("cls");
	listele();
	printf("1-Ekle\n2-Sil\n3-En Uzun Bul\n4-Cikis\n");
	printf("Secimini yap :");
	sec=getche();
	
	switch(sec){
		case '1':
			printf("\nAdi : ");
			gets(s);
			ekle(s);
			break;
		case '2':
			printf("\nAdi : ");
			gets(s);
			sil(s);
			break;
		case '3':
			enUzunBul();
			break;
		case '4':
			exit(0);
			break;
	}
	
}while(1);
}
