#include<stdio.h>
#include<stdlib.h>
struct node *addToEmpty(struct node *head , int data);
struct node *addAtEnd(struct node *head, int data);
struct node *delInter(struct node *head, int pos);
struct node *del_last(struct node *head);
struct node *del_first(struct node *head);

struct node{
    struct node *prev ;
    int data;
    struct node *next;


};
int main(){
    struct node *head = NULL;
    head = addToEmpty(head,34);
    head = addAtEnd(head , 2);
    head = addAtEnd(head , 23);
    printf("Before deletion\n");
    print(head);
    head = delInter(head , 2);
    printf("After Deletion:\n");
    print(head);
    return 0;
}

struct node *addToEmpty(struct node *head , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;

}
void print (struct node *head){
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr = ptr->next;

    }
}
struct node *addAtEnd(struct node *head, int data){
    struct node *temp, *tp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    tp = head;
    while (tp->next != NULL){
        tp= tp->next;

    }
    tp->next = temp;
    temp->prev = tp;
    return head;



}
struct node *delInter(struct node *head, int pos){
    struct node *temp = head;
    struct node *temp2 = NULL;
    if (pos==1){
        head = del_first(head);
        return head;


    }
    while(pos>1){
        temp = temp->next;
        pos--;

    }
    if(temp->next == NULL){
        head = del_last(head);

    }
    else
        temp2 = temp->prev; 
        temp2->next = temp->next;
        temp->next -> prev = temp2;
        free(temp);
        temp = NULL;
        return head;
}


    
struct node *del_last(struct node *head){
    struct node *temp = head;
    struct node *temp2;
    while(temp->next != NULL)
        temp = temp->next;
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    temp = NULL;
    return head;

} 
struct node *del_first(struct node *head){
    struct node *temp= head;
    head = head->next;
    free(temp);
    return head;
}
