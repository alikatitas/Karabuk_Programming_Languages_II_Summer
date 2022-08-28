#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[40];
	char surname[40];
	int age;
	int note;
};

int main(void){

	struct student *std;
	int i,n;
	
	printf("Ogrenci sayisinin girin : \n");
	scanf("%d",&n);
	
	std=(struct student *)malloc(n * sizeof(struct student));
	
	for(i=0;i<n;i++){
	printf("%d. Ogrencinin adi : ",i+1);
	scanf("%s",(std+i)->name);
	printf("%d. Ogrencinin soyadi : ",i+1);
	scanf("%s",(std+i)->surname);
	printf("%d. Ogrencinin yasi : ",i+1);
	scanf("%s",&(std+i)->age);
	printf("%d. Ogrencinin notu : ",i+1);
	scanf("%s",&(std+i)->note);
	}
	
	//Display
	
	for(i=0;i<n;i++){
		printf("Name :%s\tSurname :%s\t Age:%d\t Note: %d\n",(std+i)->name, (std+i)->surname, (std+i)->age, (std+i)->note);
	}
	
	return 0;
}

