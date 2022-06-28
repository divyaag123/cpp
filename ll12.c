#include<stdio.h>
#include<stdlib.h>

struct node *add_to_empty(int data);
struct node *add_at_beg(struct node *tail , int data);
struct node *add_at_end(struct node *tail , int data);
struct node *add_after_pos(struct node *tail , int pos  , int data);


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
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next =NULL;
    temp->next = tail->next;
    tail->next = temp;
    return tail;



}
struct node *add_at_end(struct node *tail, int data){
    
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next=tail->next;
    tail->next = newP;
    tail = newP;
    return tail;


}
struct node *add_after_pos(struct node *tail , int pos  , int data){
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = NULL;
    struct node *p = p->next;
    
    while(pos>1){
        p = p->next;
        pos--;

    }
    newP->next = p->next;
    p->next = newP;
    if(p == tail){
        
        tail = tail->next;
    }
    
    
    return tail;


}
int main(){
      struct node *tail = (struct node*)malloc(sizeof(struct node));
      tail = add_to_empty(67);
      tail = add_at_beg(tail,78);
      tail = add_at_end(tail , 67);
      tail = add_after_pos(tail, 2, 45);
     

      
     
    struct node *p = tail->next;
    do{
        printf("%d",p->data);
        p = p->next;
    }while(p!= tail->next);


    return 0;

      


      



     

}