#include <stdio.h>
#include <stdlib.h>

struct student{
int no;
char name[40];
int age;
struct student *next;
};

typedef struct student node;
node *head, *newNode;
node *createNode(node *head){
	int stdNo;
	node *p,*q;
	node *newNode=(node *)malloc(sizeof(node));
	
	printf("Enter new student number : ");
	scanf("%d",&newNode->no);
	printf("Enter new student name : ");
	scanf("%s",newNode->name);
	printf("Enter new student age : ");
	scanf("%d",&newNode->age);
	
	printf("Enter std number that new record will be added before : ");
	printf("Press 0 to add to the end of the list \n");
	scanf("%d",&stdNo);
	
	p=head;
	if(p->no==stdNo){
		newNode->next=p;
		head=newNode;
	}else{
		while(p->next !=NULL && p->no !=stdNo){
			q=p;
			p=p->next;
		}
		if(p->no ==stdNo){
			q->next=newNode;
			newNode->next=p;
		}else if(p->next ==NULL){
			p->next=newNode;
			newNode->next=NULL;
		}
	}
	return head;
	
}

int main(void){
	createNode(head);
	return 0;
}
