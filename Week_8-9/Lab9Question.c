#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Program bir ana menü ile açilacak. Menüde olacak seçenekler su sekildedir: 
1- Yeni Kayit Ekleme 
2- Kayit Listeleme 
3- Kayit Güncelleme 
4- Sinif Ortalamasi Hesapla 
5- Ortalamaya Göre En Basarili Ögrenci Bilgisini Göster 

Program hafizadan minimum miktarda alan tüketmelidir. Bunun için dinamik 
hafiza yöntemi gerçeklestiriniz. Örnegin ne kadar ögrenci bilgisi tutuluyorsa 
hafizadan o kadar alan tüketilmelidir. 

Kayit listeleme seçenegi numaraya göre ve nota göre olabilir. Kullanici 
ögrencileri vize veya final notuna uygulanacak üst veya alt limitlere göre 
listeleyebilmelidir. 

Kayit güncelleme ögrenci numarasina göre olacak.
*/

struct student{
	int no;
	char name[40];
	float midtermNote;
	float finalNote;
	struct student *next; //DataLink List next kismi icin *next olusturuldu
};

typedef struct student node; // Data Link List olusturmak icin student node u olusturuldu

//Kayit Ekleme
node *addRecord(node *a){
	node *temp;
	temp=(node *)malloc(sizeof(node)); //memory allocation for node
	printf("Eklenecek Kaydinizin Verilerini Girin : \n");
	printf("Ogrencinin Numarasi : ");
	scanf("%d",&temp->no);
	printf("Ogrencinin Adi : ");
	scanf("%s",temp->name);
	printf("Ogrencinin Vize Notu : ");
	scanf("%f",&temp->midtermNote);
	printf("Ogrencinin Final Notu : ");
	scanf("%f",&temp->finalNote);
	//Datalinklist swap
	temp->next=a; 
	a=temp;
	printf("Kayit eklendi\n");
	return a;
}

//Kayit Listeleme
void listRecord(node *a){
	node *take=a;
	int flag=0, choice,no;
	char name[40];
	printf("Arama Kriterleri :\n");
	printf("Numaraya Gore Aramak icin 1 e basin \n");
	printf("Isme Gore Aramak için 2 ye basin \n");
	//secim tusu al
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Ogrenci No giriniz :");
			scanf("%d",&no);
			while(take){
				if(take->no==no){
					flag++;
					printf("Aradiginiz Ogrenci Bilgileri \n");
					printf("Ogrencinin Adi : %s",take->name);
					printf("Ogrencinin Vize Notu : %.2f",take->midtermNote);
					printf("Ogrencinin Final Notu : %.2f",take->finalNote);
					take=take->next;
				}else{
					take=take->next;
				}
				
				if (flag==0){
					printf("Kayit Bulunamadi");
				}
				break;
			}
		case 2:
			printf("Ogrenci ismini giriniz :");
			scanf("%s",name);
			while(take){
				if(strcmp(name,take->name)==0){ //Alinan isim ile gelen isim karsilastir
					flag++;
					printf("Aradiginiz Ogrenci Bilgileri \n");
					printf("Ogrencinin Numarasi : %d",take->no);
					printf("Ogrencinin Vize Notu : %.2f",take->midtermNote);
					printf("Ogrencinin Final Notu : %.2f",take->finalNote);
					take=take->next;	
				}else{
					take=take->next;
				}
				
				if (flag==0){
					printf("Kayit Bulunamadi");
				}
				break;
			}
	}

}

//Kayit Guncelleme
node *updateRecord(node *a){
	node *take=a;
	int no;
	int flag=0;
	printf("Ogrenci Numarasina gore bilgileri guncelleyiniz :");
	scanf("%d",&no); //Ogrenci no al
	while(flag==0){
		if(take->no==no){
			flag++;
			printf("Secili Ogrencinin Guncellenecek Verilerini Girin : \n");
			printf("Ogrencinin Numarasi : ");
			scanf("%d",&take->no);
			printf("Ogrencinin Adi : ");
			scanf("%s",take->name);
			printf("Ogrencinin Vize Notu : ");
			scanf("%f",&take->midtermNote);
			printf("Ogrencinin Final Notu : ");
			scanf("%f",&take->finalNote);
			//Guncellenen bilgileri yazdir
			printf("Ogrencinin güncellenen bilgileri :\n");
			printf("Ogrencinin Numarasi : %d",&take->no);
			printf("Ogrencinin Adi : %s",take->name);
			printf("Ogrencinin Vize Notu : %.2f",&take->midtermNote);
			printf("Ogrencinin Final Notu : %.2f",&take->finalNote);
			
			take=take->next;
			}else{
			take=take->next;
			}
			//Bos veri gonderildiginde donguyu sonlandir
			if(take==NULL)
			{
				break;
			}			
			
			if(flag==0){
				printf("Kayit bulunamadi");
			}else
			{
				printf("Guncelleme basarili");
			}
		
		return a;
	}
}

//Sinif Ortalamasi Hesaplama
int avgClass (node *a){
	int flag=0;
	int avg=0;
	node *take=a;
	while(take){
		avg +=take->midtermNote + take->finalNote;
		take = take->next;
		flag +=2;
	}
	return avg/flag;
}

// En Basarili Ogrenciyi Bulma
node *AccomplishedStudent(node *a){
int ac=0;
node *take=a,*best;
while(take){
if((take->midtermNote +take->finalNote)/2>ac){
ac=(take->midtermNote +take->finalNote)/2;
best=take;
take=take->next;
}
else take=take->next;
}
return best;
}



int main(void){
	node *take, *pr, *bestStd;
	int process,avg;
	printf("Ogrenci Kayit Menusu");
	printf("\n1-Kayit Ekle\n2-Kayit Listele\n3-Kayit Guncelle\n4-Sinif Ortalamasi Hesapla\n5- Ortalamaya Gore En Basarili Ogrenci Bilgisini Goster\n");
do{
printf("Seciminizi yapin. Cikmak icin -1 e basin..\n");
scanf("%d",&process); 
//Menu islemini kontrol et
	switch(process){
		//Kayit Ekle
		case 1: take=addRecord(pr);
			take=pr;
			break;	
		//Kayit Listele		
		case 2: listRecord(pr);
			break;
		//Kayit Güncelle
		case 3: pr=updateRecord(pr);
			break;
		//Ortalama Hesapla
		case 4: avg=avgClass(pr);
		printf("Sinif Ortalamasi:%d\n",avg);
			break;
		//Ortalamaya Göre En Basarili Ogrenci
		case 5: bestStd=AccomplishedStudent(pr);
		printf("Ortalamasi en iyi olan Ogrenci: %s %d %d %d\n",bestStd->name,bestStd->no,bestStd->midtermNote,bestStd->finalNote);
			break;
			
		default: printf("Islem Sona Erdi...");
			break;
}
}	while(process != -1);
		return 0;
}
