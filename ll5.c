#include<stdio.h>
#include<stdlib.h>
void add_at_beg(struct node **head, int data);
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    
    head->data = 45;
    head->link = NULL;
    add_at_beg(&head , 78);
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}
void add_at_beg(struct node **head , int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    ptr->link = *head;
    *head = ptr;


}
