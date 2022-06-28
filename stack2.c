#include<stdio.h>
#include<stdlib.h>
#define MAX 4
void print();
int isFull();

void push(int data);
int a;
int pop();
int top = -1 ;
int stack_arr[MAX];
int main(){
    push(3);
    push(4);
    push(6);
    push(5);
    push(8);
    int data = pop();
    data = pop();
    data = pop();
    data = pop();
    data = pop();
    data = pop();

    print();
    printf("\n%d\n",data);
    a = isFull();
    printf("%d",a);


    return 0;

}
void push(int data){
    if(top == MAX - 1){
        printf("Stack is Full\n");
    }
    else
    {
    top = top +1 ;
    stack_arr[top] = data;
    }



}
void print(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
    for( int i=0; i<MAX ; i++){
        printf("%d  ",stack_arr[i]);

    }
    printf("\n");
    }
}
int pop()
{
    if(isEmpty())
    {
        printf("Stack is Empty");
        exit(1);

    }
    else{

    
    int value;
    value = stack_arr[top];
    top = top - 1;
    return value;
    }
}
int isFull(){
    if(top == MAX - 1)
        return 1;
    else
        return 0;

}
int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
    
    

    
}