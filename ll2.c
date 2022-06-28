// creating a single linked list
#include<stdio.h>
#include<stdlib.h>
void count_of_nodes(struct node *head);
// creating a node of a list
struct node{
    int data;
    struct node* link;

};
int main(){


    
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link=current;

    /*method 1
    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 3;
    current2->link=NULL;
    current->link = current2;
    return 0;*/

    //method 2
    //head->link->link

    

    current =  (struct node*)malloc(sizeof(struct node));
    current-> data = 3;
    current->link = NULL;
    head->link->link = current;

    count_of_nodes(head);
    


    }
    






void count_of_nodes(struct node *head){
    int count =0;
    if(head==NULL){
        printf("Linked List is empty");
    struct node *ptr =NULL;
    ptr = head;
    while(ptr!=NULL){
        count++;
        ptr = ptr->link;

    }
    printf("%d", count);
    }

}
void print_data(struct node *head){
    if (head == NULL){
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr = ptr->link; 
    }
    }

}
void add_at_end(struct node *head , int data){
    struct node *ptr , *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while(ptr!=NULL){
    ptr=ptr->link; // traversing the linked list
    }
    ptr->link=temp;
}







