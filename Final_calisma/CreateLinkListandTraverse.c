#include <stdio.h>
#include <stdlib.h>

struct student{
int no;
char name[40];
int age;
struct student *next;
};

typedef struct student node;
node *head,*newNode;

node *createList(){
	int n,k;
	node *p;
	printf("How many students in the list ?");
	scanf("%d",&n);
	// n=3 icin
	for(k=0;k<n;k++){
		if(k==0){
			head=(node *)malloc(sizeof(node));
			p=head;
		}else{
			p->next=(node *)malloc(sizeof(node));
			p=p->next;
		}
		printf("Enter %d. student number :",k+1);
		scanf("%d",&p->no);
		printf("Enter %d. student name :",k+1);
		scanf("%s",p->name);
		printf("Enter %d. student age :",k+1);
		scanf("%d",&p->age);
	}
	p->next=NULL;
	return head;
}

void traverseList(node *head){
	int counter=1;
	node *p;
	p=head;
	
	while(p!= NULL){
		printf("%d - %d %s %d\n",counter,p->no,p->name,p->age);
		p=p->next;
		counter++;
	}
}
int main(void){
	
	createList();
	traverseList(head);
	
	return 0;
}
