#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;

};
void linkdeListTraversal(struct node *ptr) {
	while(ptr != NULL) {
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
}
int main() {

	struct node *head = (struct node*)malloc(sizeof(struct node));
	struct node *first = (struct node*)malloc(sizeof(struct node));
	struct node *second = (struct node*)malloc(sizeof(struct node));
	struct node *third = (struct node*)malloc(sizeof(struct node));

	head->data = 100;
	first->data = 200;
	second->data = 300;
	third->data = 400;

	head->link = first;
	first->link = second;
	second->link = third;
	third->link = NULL;

	linkdeListTraversal(head);

	return 0;
}