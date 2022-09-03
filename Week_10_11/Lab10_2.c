#include <stdio.h>
#include <stdlib.h>

/* Bir bagli dogrusal listelerde listenin sonundaki dügümü keserek listenin basina ekleyen ve 
olusan listenin son halini geri döndüren prototipi asagida verilmis fonksiyonu yaziniz. 

struct node* cutlastaddhead(struct node* head); 
struct node { 
int number; 
struct node * next; 
};*/

struct node {
	//data
	int number;
	//next
	struct node *next;
};

//node
typedef struct node Node;
//head and tail
Node *head, *newNode;

//Prototype of function
Node* cutlastaddhead(Node*); 
Node* addStart(Node*, Node*);

int main(void){
	
	cutlastaddhead(head);
	
	return 0;
}

Node* cutlastaddhead(Node* head){

 if(head==NULL || head->next == NULL)
 {
 return head;
 }
 Node* curr = head;
 Node* prev = NULL;

 while(curr->next != NULL)
 {
 prev = curr;
 curr = curr->next;
 }
 Node* last = curr;
 prev->next = NULL;
 head = addStart(head , last);

 return head;
}


Node* addStart(Node* head, Node* newNode)
{
 Node* p= head;
 newNode->next = p;
 head = newNode;
 return head;
}
