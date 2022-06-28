#include<stdio.h>
#include<stdlib.h>
struct node *add_at_end(struct node *head , int data );
struct node *add_at_beg(struct node *head , int data);
struct node *add_at_pos(struct node *head, int data , int pos);


struct node{
    struct node *prev;
    int data;
    struct node *next;

};
int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;
    head->prev = NULL;
    head = add_at_end(head , 56);
    head = add_at_beg(head,78);
    head = add_at_pos(head,76,3);
    
    
    struct node *ptr = head;

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    
}
struct node *add_at_end(struct node *head , int data ){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    
    temp->data = data;
    temp->next =NULL;
    temp->prev = NULL;
    temp->prev = head;
    head->next = temp;
    return head;
}
struct node *add_at_beg(struct node *head , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next =NULL;
    temp->prev = NULL;
    temp->next= head;
    head->prev = temp;
    head = temp;
    return head;
}
struct node *add_at_pos(struct node *head, int data , int pos){
    struct node *ptr = head;
    struct node *temp2 = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    
    
    pos--;
    while(pos!=NULL){
        ptr = ptr->next;
        pos--;


    }
    if(ptr->next == NULL ){
        ptr->next = temp;
        temp->prev = ptr;
    }
    
    else{
    temp2 = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    temp->next = temp2;
    temp2->prev = ptr;
    
    }
    return head;




}

