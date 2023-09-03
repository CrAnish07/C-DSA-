#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
void linkedListTraversal(struct node *ptr) {
    while(ptr != NULL) {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->link;
    }
}
struct node *deletionAtIndex(struct node *head, int index) {
    struct node *p = head;
    struct node *q = head->link;
    for (int i = 0; i < index-1; i++)
    {
       p = p->link; 
       q = q->link;
    }
    p->link = q->link;
    free(q);
    return head;
    
}
int main() {

    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *last = (struct node*)malloc(sizeof(struct node));

    head->data = 100;
    first->data = 200;
    second->data = 300;
    third->data = 400;
    last->data = 500;

    head->link = first;
    first->link = second;
    second->link = third;
    third->link = last;
    last->link = NULL;

    head = deletionAtIndex(head, 2);
    linkedListTraversal(head);

    return 0;
}