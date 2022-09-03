#include <stdio.h>
#include <stdlib.h>

/*1. Klavyeden -1 girilene kadar verilen tek sayilari tek bagli dogrusal bir listenin basina, verilen çift 
sayilari ise listenin sonuna ekleyen programi yaziniz. 
Adding the odd numbers to the beginning of the list and even numbers to the end of the list 
until -1 is entered from keyboard. 
struct node { 
int number; 
struct node * next; 
}; */

struct number{
	//data
	int number;
	//next
	struct number *next;
};
//node
typedef struct number node;
//head and newNode
node *head, *newNode;

node *addStart(node *, node *);
node addFinish(node *);
node* makeList();

int main(void){
	makeList();
	return 0;
}
//Basa Ekleme
node *addStart(node *head, node *newNode){
	node *p;
	p=head;
	newNode->next=p;
	return head;	
}
//Sona Ekleme
node addFinish(node *head){
	if(head ==NULL){
		head=addStart(head,newNode);
		return *head;
	}
	node *current=head;
	while(current->next != NULL){
		current=current->next;
	}
	current->next=newNode;
	return *head;
}

//Liste Olusturma
node* makeList()
{
 int n;
 node* head = NULL;
 printf("Enter numbers of the list:\n");
 while(1)
 {
 scanf("%d",&n);
 if(n == -1) break;

 node* newNode = (node*)malloc(sizeof(node*));
 newNode->number = n;
 newNode->next = NULL;
 if(n%2 == 1)// if the number is odd
 {
 head = addStart(&head, &newNode);
 }
 else if(n%2 == 0)//if the number is even
 {
 head = addFinish(&head, &newNode);
 }
 }
 printf("List created\n");
 return head;
}
