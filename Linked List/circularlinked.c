#include<stdio.h>
#include<stdlib.h>
// using namespace std;

struct node{
    int data;
    struct node * next;
};

void traversal(struct node*head){
    struct node*temp = head->next;
    printf("Elements are: ");
    printf("%d ", head->data);
    while(temp != head){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");

}

void deleteatend(struct node*head){
    struct node*temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }
    temp->next = head;
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
    four->next = one;

    head = one;

    traversal(head);
    deleteatend(head);
    traversal(head);

    return 0;
}