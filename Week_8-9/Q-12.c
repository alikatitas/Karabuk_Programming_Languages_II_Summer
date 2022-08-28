#include <stdio.h>
#include <string.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books book);
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
	
	//print Books datas
	printBook(Book1);
	printBook(Book2);
		
	return 0;
}

// print book function
void printBook(struct Books book){
	printf("Book Title : %s\n",book.title);
	printf("Book Author : %s\n",book.author);
	printf("Book Subject : %s\n",book.subject);
	printf("Book ID : %d\n",book.book_id);
}
