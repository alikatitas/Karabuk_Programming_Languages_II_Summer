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


node *deleteNode(node *head){
	int stdNo;
	node *p,*q;
	
	printf("Enter student number that will be deleted ?");
	scanf("%d",&stdNo);
	
	p=head;
	if(p->no == stdNo){
		head=p->next;
		free(p);
	}else  //p->no != stdNo
	{
		while(p->next != NULL && p->no != stdNo){
			q=p;
			p=p->next;
		}
		if(p->no==stdNo){
			q->next=p->next;
			free(p);
		}else if(p->next == NULL){
			printf("No node found to delete");
		}
	}
	return head;
}

int main(void){
	deleteNode(head);
	return 0;
}
