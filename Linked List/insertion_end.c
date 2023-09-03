#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

void linkdeListTraversal(struct node *ptr) {
	while(ptr != NULL) {
		printf("Element :%d\n", ptr->data);
		ptr = ptr->link;
	}
}

struct node * insertionAtEnd(struct node *head, int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
   while (p->link != NULL)
   {
    p = p->link;
   }
   ptr->data = data;
   p->link = ptr;
   ptr->link = NULL;   
   return head;	
}


int main() {
	
	struct node *head;
	struct node *first;
	struct node *second;
	struct node *third;
	
	
	head = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	head->data = 0;
	first->data = 100;
	second->data = 200;
	third->data = 300;
	
	head->link = first;
	first->link = second;
	second->link = third;
	third->link = NULL;
	
	head = insertionAtEnd(head, 400);

	linkdeListTraversal(head);
	
	
	return 0;
}