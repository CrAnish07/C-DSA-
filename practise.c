#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traversal(struct node *ptr) {
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

// void insertionFirst(struct node *head, int data) {
//     struct node *ptr = (struct node*)malloc(sizeof(struct node));
//     ptr->data = data;
//     ptr->next = head;
//     head = ptr;
// }

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    // struct node *head = first;

    head->data = 10;
    first->data = 20;
    second->data = 30;
    third->data = 40;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    head = insertionFirst(head, 200);
    traversal(head);
}