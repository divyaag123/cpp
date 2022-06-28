#include<stdio.h>
#include<stdlib.h>
struct node *add_at_end(struct node *head , int data);
struct node *add_at_empty(struct node *head , int data);
struct node{
    struct node *prev;
    int data;
    struct node *next;


};

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head = NULL;
    struct node *ptr;
    head = createList(head);

    ptr = head;
    while(ptr!=NULL){
        printf("%d" , ptr->data);
        ptr = ptr->next;
    }
    return 0;

}
struct node *createList(struct node*head)
{
    int n , data , i;
    printf("Enter the number of nodes");
    scanf("%d",&n);

    if(n==0)
       return head;

    printf("Enter the element for the node 1:");
    scanf("%d",&data);
    head = addToempty(head,data);

    for(i=1;i<n;i++){
        printf("Enter the element for the node %d" ,i+1);
        scanf("%d" , &data);
        head = addAtEnd(head,data);

    }
    return head;

}
struct node *add_at_end(struct node *head , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    head->next = temp;
    temp->prev = head;
    return head;

}
struct node *add_at_empty(struct node *head , int data){
    struct node *temp =(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    head->next = temp;
    temp->prev = head;
    return head;

}