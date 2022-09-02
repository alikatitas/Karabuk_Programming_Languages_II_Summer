#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*1) Bir siniftaki ögrencilerin numarasi, adi, vize notu ve final notu bilgileri üzerinde 
çesitli islemler yapabilecek bir program yaziniz. Programin özellikleri asagida 
verilmistir: 
a) Program bir ana menü ile açilacak. Menüde olacak seçenekler su sekildedir: 
1- Yeni Kayit Ekleme 
2- Kayit Listeleme 
3- Kayit Güncelleme 
4- Sinif Ortalamasi Hesapla 
5- Ortalamaya Göre En Basarili Ögrenci Bilgisini Göster 
b) Program hafizadan minimum miktarda alan tüketmelidir. Bunun için dinamik 
hafiza yöntemi gerçeklestiriniz. Örnegin ne kadar ögrenci bilgisi tutuluyorsa 
hafizadan o kadar alan tüketilmelidir. 
c) Kayit listeleme seçenegi numaraya göre ve nota göre olabilir. Kullanici 
ögrencileri vize veya final notuna uygulanacak üst veya alt limitlere göre 
listeleyebilmelidir. 
d) Kayit güncelleme ögrenci numarasina göre olacak.*/

struct student{
	//linklist fileds data+next
	int no;
	char name[20];
	int midterm;
	int final;
	struct student *next;
};
typedef struct student node; // create node
node *head, *prevNode, *newNode, *best; // node type variables

void add();
void avgClass();

int main(void){
	char select;
	
	do{
	printf( "\n****Ogrenci Kayit Programi****\n\n"
			"1- Yeni Kayit Ekleme\n"
			"2- Kayit Listeleme\n"
			"3- Kayit Guncelleme\n"
			"4- Sinif Ortalamasi Hesapla\n"
			"5- Ortalamaya Gore En Basarili Ogrenci Bilgisini Goster\n");
	printf("1 ile 5 arasinde secim yapiniz : \n");
	select = getche();
	printf("\n");
		switch(select){
			case '1':
				add();
				break;
			case '2':
				list();
				break;
			case '3':
				printf("Yapim asamasinda...");
				break;
			case '4':
				avgClass();
				break;
			case '5':
				bestStd();
				break;
		}
	}while(1);
			
	return 0;
}

//Add Record

void add(void){
	
	int i,n,recNo;
	printf("Ogrenci sayisini girin : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			newNode=(node *)malloc(sizeof(node));
			head=newNode;
		}
		else{
			newNode->next =(node * )malloc(sizeof(node));
			newNode = newNode->next;
		}
	printf("Ogrenci No : ");
	scanf("%d",&newNode->no);
	printf("Ogrenci Adi : ");
	scanf("%s",newNode->name);
	printf("Ogrenci Vize : ");
	scanf("%d",&newNode->midterm);
	printf("Ogrenci Final : ");
	scanf("%d",&newNode->final);
	}
	newNode->next=NULL;
}

//List Record 
void list(){
	
	double note=0;
	node *p;
	p=head;
	while(p != NULL){
	printf("Ogrenci No : %d\n",newNode->no);
	printf("Ogrenci Adi : %s\n",newNode->name);
	printf("Ogrenci Vize : %d\n",newNode->midterm);
	printf("Ogrenci Final : %d\n",newNode->final);
	p=p->next;
	}
	
}

//note Calculate
double noteCalculate(int midTerm, int final){
	return (0.4*midTerm) + (0.6*final);
}

//avarage of class
void avgClass(){
	double avg=0;
	double sum=0;
	int counter=0;
	node *p;
	p=head;
	if(p==NULL){
		printf("Listede kayit yok");
	}else{
		do{
			sum +=noteCalculate(p->midterm,p->final);
			p=p->next;
			counter++;
		}while(p != NULL);
	}
	avg=sum/counter;
	printf("Ortalama : %.2f",avg);
	}
	
	
// the best Student
void bestStd(){
	double note=0;
	node *p;
	p=head;
	best=head;
	
	while(p->next != NULL){
		p=p->next;
		
		if(noteCalculate(p->midterm, p->final) > noteCalculate(best->midterm,best->final));
		best=p;
	}
	printf("En basarili Ogrenci : ");
	printf("No:%d - Ad:%s Basari Notu:%2.f",best->no, best->name, noteCalculate(best->midterm,best->final));
}	
