#include<stdio.h>
#include<stdlib.h>

struct node* addAtBeg(int data);

struct node* addAtEnd(struct node* tail , int data);
struct node* addAfterPos(struct node* tail , int data , int pos);




struct node{
    int data;
    struct node* next ;

    
};
struct node* addAtBeg(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}
struct node* addAtEnd(struct node* tail , int data){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    p->next = tail->next;

    tail->next = p;
    tail = tail->next;
    return tail;
}
struct node* addAfterPos(struct node* tail , int data , int pos){
    struct node* ptr = tail->next;

    struct node *p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    while(pos>1){
        ptr = ptr->next;
        pos--;

    }
    p->next = ptr->next;
    ptr->next = p;
    if(ptr == tail){
        tail = tail->next;

    }
    return tail;
}
int searchElement(struct node* tail, int element){
    struct node* temp;
    int index = 0;
    if(tail == NULL)
    return -2;
    temp = tail->next;
    do{
        if(temp->data == element)
            return index;
        temp = temp->next;
        index++;
    }while(temp!=tail->next);
    return -1;
    }


int main(){
    int element;
    struct node* tail ;
    tail = addAtBeg(45);
    printf("%d" , tail->data);
    tail = addAtEnd(tail , 54);
    printf("%d" , tail->data);
    tail = addAtEnd(tail , 67);
    printf("%d", tail->data);
    tail = addAfterPos(tail , 34, 2);
    struct node* p = tail->next;
    do{
        printf("\n%d", p->data);
        p = p->next;
    }while(p!=tail->next);
    printf("Enter the element");
    scanf("%d" ,&element );
    int index = searchElement(tail , element);
    if(index==-1)
        printf("Element not found");
    else if(index == -2)
        printf("Linked list is empty");
    else{
        printf("Element %d is at index %d",element,index);
    }    
    
    return 0;
   

}




