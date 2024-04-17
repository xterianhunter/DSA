#include<stdio.h>
#include<stdlib.h>
// using namespace std;

struct node{
    int data;
    struct node * next;
};

void traversal(struct node*temp){
    printf("Elements are: ");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void modify(struct node*temp, int p, int d){
    for(int i=1; i<p; i++){
        temp = temp->next;
    }
    temp->data = d;
}

int main (){
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    head = one;

    traversal(head);
    modify(head, 3, 100);
    traversal(head);

    return 0;
}
