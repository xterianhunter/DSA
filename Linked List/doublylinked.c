#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

void traversal(struct node*temp){
    printf("Elements are: ");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// void traversalEnd(struct node* tail){
//     printf("Elements from last are: ");
//     while(tail != NULL){
//         printf("%d ", tail->data);
//         tail = tail->prev;
//     }
//     printf("\n");
// }

int main (){
    struct node* head;
    struct node* one;
    struct node* two;
    struct node* three;
    struct node* four;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;

    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    four->prev = three;
    three->prev = two;
    two->prev = one;
    one->prev = NULL;
    struct node* tail = four;

    traversal(head);
    // traversalEnd(tail);

    struct node*extra;
    extra = malloc(sizeof(struct node));
    extra->data = 100;
    struct node*temp;
    temp = head;
    for(int i=2; i<3; i++){
        temp = temp->next;
    }
    
    extra->next = temp->next;
    temp->next->prev = extra;
    temp->next = extra;
    extra->prev = temp;

    traversal(head);
    return 0;
}