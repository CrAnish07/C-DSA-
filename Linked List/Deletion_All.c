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
struct node *deleteFirst(struct node *head) {
    struct node *ptr = head;
    head = head->link;
    free(ptr);
    return head;
}
struct node *deleteAtIndex(struct node *head, int index) {
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
struct node *deleteAtEnd(struct node *head) {
    struct node *p = head;
    struct node *q = head->link;
    while(q->link != NULL) {
        p = p->link;
        q = q->link;
    }
    p->link = NULL;
    free(q);
    return head;
}
int main() {

    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));
    struct node *fifth = (struct node*)malloc(sizeof(struct node));
    struct node *last = (struct node*)malloc(sizeof(struct node));

    head->data = 100;
    first->data = 200;
    second->data = 300;
    third->data = 400;
    fourth->data = 500;
    fifth->data = 600;
    last->data = 700;

    head->link = first;
    first->link = second;
    second->link = third;
    third->link = fourth;
    fourth->link = fifth;
    fifth->link = last;
    last->link = NULL;
    
    printf("Deleting From First\n");
    head = deleteFirst(head);
    linkedListTraversal(head);

    printf("\nDeleting At Index\n");
    head = deleteAtIndex(head, 3);
    linkedListTraversal(head);

    printf("\nDeleting At End\n");
    head = deleteAtEnd(head);
    linkedListTraversal(head);

    return 0;
}