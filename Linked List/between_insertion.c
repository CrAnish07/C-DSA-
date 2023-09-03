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

struct node * insertionAtIndex(struct node *head, int data, int index){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->link;
        i++;
    }
    ptr->data = data;
    ptr->link = p->link;
    p->link = ptr;
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
	
	head->data = 1000;
    first->data = 100;
	second->data = 200;
	third->data = 300;
	
    head->link = first;
	first->link = second;
	second->link = third;
	third->link = NULL;
	
	
	head = insertionAtIndex(head, 500, 2);
	linkdeListTraversal(head);
	
	
	return 0;
}