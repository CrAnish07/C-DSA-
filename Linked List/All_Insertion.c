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
struct node *insertionAtFirst(struct node *head, int data) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = head;
    head = ptr;
}
struct node *insertionAtIndex(struct node *head, int data, int index) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while( i != index-1) {
        p = p->link;
        i++;
    }
    ptr->data = data;
    ptr->link = p->link;
    p->link = ptr;
    return head;
}
struct node *insertionAtEnd(struct node *head, int data) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    while(p->link != NULL) {
        p = p->link;
    }
    ptr->data = data;
    p->link = ptr;
    ptr->link = NULL;
    return head;
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


    printf("Insertion At First\n");
    head = insertionAtFirst(head, 1000);
    linkedListTraversal(head);

    printf("\nInsertion At Index\n");   
    head = insertionAtIndex(head, 1000, 2);
    linkedListTraversal(head);

    printf("\nInsertion At End\n");
    head = insertionAtEnd(head, 1000);
    linkedListTraversal(head);

    return 0;
}