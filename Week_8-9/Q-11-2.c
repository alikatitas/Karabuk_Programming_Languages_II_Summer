#include <stdio.h>
#include <string.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main(void){
	
	struct Books Book1;
	struct Books Book2;
	//struct Books *Book
	
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject,"C Porgramming Tutorial");
	Book1.book_id=6495407;
	
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject,"Telecom Billing Tutorial");
	Book2.book_id=6495700;
	
	//print Book1 datas
	printf("Book1 Title : %s\n",Book1.title);
	printf("Book1 Author : %s\n",Book1.author);
	printf("Book1 Subject : %s\n",Book1.subject);
	printf("Book1 ID : %d\n",Book1.book_id);
	
	//print Book2 datas
	printf("Book2 Title : %s\n",Book2.title);
	printf("Book2 Author : %s\n",Book2.author);
	printf("Book2 Subject : %s\n",Book2.subject);
	printf("Book2 ID : %d\n",Book2.book_id);
		
	return 0;
}
