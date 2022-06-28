#include<stdio.h>
#include<stdlib.h>


struct node *addToEnd(struct node *head , int data);
struct node *addToBeg(struct node *head , int data);
struct node  *delLast(struct node *head);
struct node *delInter(struct node *head,int pos);
struct node {
    struct node* prev;
    int data;
    struct node *next;

};
struct node *addToBeg(struct node *head , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head->next = temp;
    temp->prev = head;
    return head;
}



struct node *addToEnd(struct node *head , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    struct node *tp = head;
    while(tp->next!=NULL){
        tp= tp->next;

    }
    tp->next = temp;
    temp->prev = tp;
    
    return head;




}

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 45;
    head->prev = NULL;
    head = addToBeg(head ,34);
    head = addToEnd(head , 56);

    

    
    printf("Before deletion\n");

   
    
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    head = delInter(head,2);
    ptr = head;
    printf("\nAfter Deletion\n");
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;

    




}
struct node  *delLast(struct node *head){
    struct node *temp2 = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    temp = NULL;
    return head;
}
struct node *delFirst(struct node *head){
    struct node *temp= head;
    head = head->next;
    free(temp);
    temp=NULL;
    return head;

}
struct node *delInter(struct node *head,int pos){
    struct node *temp = head;
    struct node *temp2 = NULL;
    if(pos ==1){
        head = delFirst(head);
        return head;
    }
    while(pos>1){
        temp = temp->next;
        pos--;
    }
    if(temp -> next == NULL)
        head = delLast(head);
    else{
    temp2 = temp->prev;
    temp->next->prev = temp2;
    temp2->next = temp->next;
    free(temp);
    temp = NULL;
    return head;
    }

}