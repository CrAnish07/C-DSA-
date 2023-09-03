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

struct node * deletionAtEnd(struct node *head)
{
	struct node *p = head;
    struct node *q = head->link;
    while (q->link != NULL)
    {
        p = p->link;
        q = q->link;
    }
    p->link = NULL;
    free(q);
    return head;
	
}


int main() {
	
	struct node *head;
	struct node *first;
	struct node *second;
	struct node *third;
    struct node *last;
	
	
	head = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
    last = (struct node*)malloc(sizeof(struct node));
	
	head->data = 0;
	first->data = 100;
	second->data = 200;
	third->data = 300;
	
	head->link = first;
	first->link = second;
	second->link = third;
	third->link = NULL;
	
	head = deletionAtEnd(head);
	linkdeListTraversal(head);
	
	
	return 0;
}