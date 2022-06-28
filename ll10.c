#include<stdio.h>
#include<stdlib.h>
struct node *add_to_empty(int data);
struct node *add_at_beg(struct node *tail , int data);
void print(struct node* tail);
struct node {
    
    int data;
    struct node *next;
};
struct node *add_to_empty(int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;


    
    
}
struct node *add_at_beg(struct node *tail , int data){
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
}
void print(struct node* tail){
    struct node *p = tail->next;
    do{
        printf("%d ",p->data);
        p = p->next;


    }while(p!=tail->next);
}
int main(){
    struct node *tail;
    tail = add_to_empty(45);
    tail = add_at_beg(tail , 89);

    print(tail);
    return 0;

}