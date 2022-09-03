#include <stdio.h>
#include <stdlib.h>

/*  Bir bagli dogrusal listelerde listenin ortasinda yer alan elemani silen (tuttugu alani bellege geri 
iade eden) bir fonksiyon yaziniz (Liste 100 ya da 101 elemanli ise 50. elamani silecek sekilde). 
Fonksiyon parametre olarak bir liste alip güncellenen listeyi geri döndürecektir.*/

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
Node* deleteMiddle(Node*);

int main(void){
	
	deleteMiddle(head);
	
	return 0;
}

Node* deleteMiddle(Node* head)
{
 int size = 0;
 Node* curr = head;
 while(curr!=NULL)
 {
 curr = curr->next;
 size++;
 if(size == 0)
 {
 return NULL;
 }
 else if(size==1)
 {
 free(head);
 return NULL;
 }
 else if(size == 2)
 {
 Node* newhead = head->next;
 free(head);
 head = newhead;
 return head;
 }
 int index = 0;
 curr = head;
 Node* prev = NULL;
 while(index < (size/2) )
 {
 index++;
 prev = curr;
 curr = curr->next;
 }
 Node* toBeDeleted = curr;
 prev->next = toBeDeleted->next;
 free(toBeDeleted);
 return head;
}
}
