#include<stdio.h>
#include<stdlib.h>
struct node *add_to_empty(int data);
struct node *add_to_beg(struct node *tail , int data);
struct node *add_to_end(struct node *tail , int data);
void print(struct node *tail);

struct node *del_Inter(struct node *tail,int pos);
struct node{
    int data;
    struct node *next;


};
struct node *add_to_empty(int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}
struct node *add_to_beg(struct node *tail , int data){
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
}
struct node *add_to_end(struct node *tail , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = tail->next;
    tail->next = temp;
    tail = temp;
    return tail;

}
void print(struct node *tail){
    struct node *p = tail->next;
    do{
        printf("%d ", p->data);
        p = p->next;

    }while(p!= tail->next);
}
struct node *del_Inter(struct node *tail,int pos){
    if(tail==NULL){
        return tail;
    }
    struct node* temp = tail->next;
    if(tail->next == tail){
        free(tail);
        tail = NULL;
        return tail;
    }
while(pos>2){
    temp = temp->next;
    pos--;
}
struct node *temp2 = temp->next;
temp->next = temp2->next;
free(temp2);
temp2 = NULL;
return tail;

    
}

int main()

{
    struct node *tail =(struct node*)malloc(sizeof(struct node));
    tail = add_to_empty(45);
    tail = add_to_beg(tail , 56);
    tail = add_to_end(tail,78);
    tail = add_to_end(tail,43);
    tail = del_Inter(tail,2);
    print(tail);
    return 0;
    





}
struct node *del_first(struct node *tail){
    
    struct noode *temp;
    temp = tail->next;
    tail->next = temp->next;
    free(temp);
    temp = NULL;
    return tail;


}