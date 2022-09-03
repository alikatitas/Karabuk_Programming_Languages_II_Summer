#include <stdio.h>
#include <stdlib.h>

/*Hasta takip sistemi
? Hasta no, adi, yasi ve hastalik bilgisini tutacak
bir struct olustur
? Belli sayida hasta girisi yap.
? Dosya içerisinde hasta no’ya göre arama yap.
? Hasta kaydi sil
? Hasta kaydi düzenle.
? Dosyadan hastalari listele*/

struct hasta{
	int hastaNo;
	char adi[25];
	int yas;
	char bilgi[40];
};

//Functions
void textDosya(FILE *);
void yeniKayit(FILE *);
void hastaListele(FILE *);
void hastaSil(FILE *);

int main(void){
	int select;
	printf("Hasta Takip Sistemi\n"
	"1-Hasta Girisi Yapin\n"
	"2-Hasta Bulun\n"
	"3-Hasta Kaydi Silin\n"
	"4-Hasta Kaydi Duzenleyin\n"
	"5-Hastalari Listeleyin");
	printf("Lütfen seciminizi yapin : \n");
	scanf("%d",&select);
	
	//textDosya("hasta.dat");
	
	FILE *file=fopen("hasta.dat","r+");
	if(file==NULL){
		printf("Dosya acilamadi");
	}else{
			switch(select){
				case 1:
					//"1-Hasta Girisi Yapin\n"

					yeniKayit("hasta.dat");
					break;
				case 2:
					//"2-Hasta Bulun\n"
					hastaListele("hasta.dat");
					break;
				case 3:
					//"3-Hasta Kaydi Silin\n"
					hastaSil("hasta.dat");
					break;
				case 4:
					//"4-Hasta Kaydi Duzenleyin\n"
					break;
				case 5:
					//"5-Hastalari Listeleyin"
					break;
			}
		}
	fclose(file);
	
	return 0;
}

// File Read
void textDosya(FILE *okuPtr){
	struct hasta bosHasta={0,"",0,""};
	FILE *yazPtr =fopen("hasta.dat","w");
	if(yazPtr==NULL){
		printf("Dosya yazilamadi");
	}else{
		rewind(okuPtr);
		fprintf(yazPtr,"%-10s%-16s%-11s%10s\n","Hasta No","Adi","Yasi","Bilgi");
		while(!feof(yazPtr)){
			fread(&bosHasta,sizeof(struct hasta),1,okuPtr);
			if(bosHasta.hastaNo !=0){
				fprintf(yazPtr,"%-10d%-16s%-11d%10s\n",bosHasta.hastaNo,bosHasta.adi,bosHasta.yas,bosHasta.bilgi);
			}
			fclose(yazPtr);
		}
	}
	
}

//Yeni Kayit
void yeniKayit(FILE *file){
	int hastaID;
	struct hasta bosHasta={0,"",0,""};
	printf("Yeni Hasta No Girin : ");
	scanf("%d",&hastaID);
	
	fseek(file,(hastaID-1)*sizeof(struct hasta),SEEK_SET);
	fread(&bosHasta,sizeof(struct hasta),1,file);
	if(bosHasta.hastaNo !=0){
		printf("%d nolu hasta kaydi zaten mevcut\n",hastaID);
	}else{
		printf("Isim , Yas ve Bilgi Girin : ");
		scanf("%-10d%-16s%-11d%10s\n",bosHasta.adi,bosHasta.yas,bosHasta.bilgi);
		bosHasta.hastaNo =hastaID;
		fseek(file,(hastaID-1)*sizeof(struct hasta),SEEK_SET);
		fread(&bosHasta,sizeof(struct hasta),1,file);
	}
}

//Hasta Listele
void hastaListele(FILE *fPtr){
	struct hasta bosHasta={0,"",0,""};
	fprintf(fPtr,"%-10s%-16s%-11s%10s\n","Hasta No","Adi","Yasi","Bilgi");
	while(!feof(fPtr)){
		fread(&bosHasta,sizeof(struct hasta),1,fPtr);
		if(bosHasta.hastaNo !=0){
		fprintf("%-10d%-16s%-11d%10s\n",bosHasta.hastaNo,bosHasta.adi,bosHasta.yas,bosHasta.bilgi);
		}
		fclose(fPtr);
		getchar();
	}	
}

//Hasta Sil
void hastaSil(FILE *fPtr){
	struct hasta hastaBilgi, bosHasta={0,"",0,""};
	int hastaID;
	printf("Silmek istediginiz hesap noyu girin : ");
	scanf("%d",&hastaID);
	
	fseek(fPtr,(hastaID-1)*sizeof(struct hasta),SEEK_SET);
	fread(&hastaBilgi,sizeof(struct hasta),1,fPtr);
	if(hastaBilgi.hastaNo==0){
		printf("Silinecek %d nolu hesap yok",hastaID);
	}else{
		fseek(fPtr,(hastaID-1)*sizeof(struct hasta),SEEK_SET);
		fread(&hastaBilgi,sizeof(struct hasta),1,fPtr);
	}
}

