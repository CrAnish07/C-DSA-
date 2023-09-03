#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr) {
    if(ptr->top == ptr->size-1) {
        return 1;
    }
    else {
        return 0;
    }
}
int isEmpty(struct stack *ptr) {
    if(ptr->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}
void push(struct stack *ptr, int value) {
    if(isFull(ptr)) {
        printf("Stack Overflow! cannot push %d to the stack\n",value);
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflowflow!");
    }
    else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main() {
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size *sizeof(int));
    printf("Stack has been created successfully\n");

    printf("%d\n", isFull(s));
    printf("%d\n", isEmpty(s));
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);
    push(s, 70);
    push(s, 80);
    push(s, 90);
    push(s, 100);
    printf("After Pushing, Full : %d\n", isFull(s));
    printf("After Pushing, Empty : %d\n", isEmpty(s));

    printf("Popped %d from the stack", pop(s));

    return 0;
}