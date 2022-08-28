#include <stdio.h>

struct student{
	int number;
	char name[40];
	char surname[40];
	int midtermGrade;
};

int main(void){
struct student ogr[10];	
int i;

printf("3 Ogrencinin bilgilerini girin : \n");
for(i=0;i<3;i++){
	printf("%d. Ogrencinin Adi :",i+1);
	scanf("%s",ogr[i].name);
	printf("%d. Ogrencinin Soyadi :",i+1);
	scanf("%s",ogr[i].surname);
	printf("%d. Ogrencinin Numarasi :",i+1);
	scanf("%d",&ogr[i].number);
	printf("%d. Ogrencinin Vize Notu :",i+1);
	scanf("%d",&ogr[i].midtermGrade);
}
// Ogrencilerin notlari

for(i=0;i<3;i++){
	printf("%d. Ogrencinin Adi :",i+1);
	printf("%s\n",ogr[i].name);
	printf("%d. Ogrencinin Soyadi :",i+1);
	printf("%s\n",ogr[i].surname);
	printf("%d. Ogrencinin Numarasi :",i+1);
	printf("%d\n",&ogr[i].number);
	printf("%d. Ogrencinin Vize Notu :",i+1);
	printf("%d\n",&ogr[i].midtermGrade);
}

return 0;
}
