#include <stdio.h>

struct student {
	char name[50];
	int age;
};

void display(struct student s){ //struct print to terminal
	printf("\nDisplaying Informations \n");
	printf("Name :%s", s.name);
	printf("\nAge : %d",s.age);
}
int main(void){
	
	struct student s1;
	printf("Enter name :");
	scanf("%[^n]%*c",s1.name); //newline olana kadar karakteri isim olarak aliyoruz
	
	printf("Enter Age :");
	scanf("%d",&s1.age); //Yasi aliyoruz
	
	display(s1); // ekrana yas ve ismi display fonksiyonu ile bastiriyoruz
	
return 0;
}

