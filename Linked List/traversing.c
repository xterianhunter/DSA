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

void insertat(struct node*head, int p, int d){
    struct node*ptr = malloc(sizeof(struct node));
    struct node*temp = head;
    ptr->data = d;
    for(int i=2; i<p; i++){
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

void deleteat(struct node*head, int p){
    struct node*temp = head;
    for(int i=2; i<p; i++){
        temp = temp->next;
    }
    struct node* tempd = temp->next;
    temp->next = tempd->next;
}

int main (){
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    //traversiong

    struct node*temp = head;
    traversal(head);

    // insertion
    // at beginning
    struct node*extra = NULL;
    extra = (struct node*)malloc(sizeof(struct node));
    extra->data = 4;
    
    extra->next = head;
    head = extra;

    traversal(head);

    //insertion at index

    insertat(head, 2, 7);

    traversal(head);


    //deletion

    temp = head;
    // struct node*tempd =head->next;
    
    while(temp->next->next!=NULL){
        temp = temp->next;
    }

    temp->next = NULL;

    // deleteat(head, 2);

    traversal(head);

    //insert at end

    temp = head;
    struct node *einsert = NULL;
    einsert  = malloc(sizeof(struct node));
    einsert->data = 10;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = einsert;
    einsert->next = NULL;
    traversal(head);

    return 0;
}