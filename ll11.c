#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;

}
struct node *add_at_empty(struct node *head , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}
struct node *add_at_beg(struct node *tail, int data){
    struct node *temp =(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = tail->next;

}
int main(){
    struct node *tail = (struct node*)malloc(sizeof(struct node));
    tail = add_to_empty(head, int data);
    //traversing the circular list 



}