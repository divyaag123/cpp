#include<stdio.h>
#include<stdlib.h>
struct node *add_at_end(struct node *ptr, int data);
struct node *add_at_pos(struct node *head,int data,int pos);


struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> data = 45;
    head->link = NULL;
    struct node *ptr = head;

    ptr = add_at_end(ptr , 3);
    ptr = add_at_end(ptr , 85);
    ptr = add_at_end(ptr , 8);
    ptr = add_at_pos(head, 5 ,3);

    
    ptr = head;

    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
        
    }
    
}
struct node *add_at_end(struct node *ptr , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp->link = NULL;
    ptr-> link = temp;
    return temp;
}
 struct node *add_at_pos(struct node* head , int data , int pos){
    struct node *ptr = head;
    struct node* temp = (struct node*)malloc (sizeof (struct node));
    temp -> data = data;
    temp->link = NULL;
    pos-- ;
    
    while(pos!= 1){
        ptr = ptr-> link;
        pos--;

    }
    temp->link= ptr->link;
    ptr->link = temp;
    return temp;

    


}

    
    




