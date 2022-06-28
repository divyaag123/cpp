#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
void push(int data);
int peek();
int pop();
void print();
int top  = -1;
void push(int data);
int main(){
    int choice, data;
    while(1){
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");
        printf(" Please enter your choice\n");
        scanf(" %d\n",&choice);
        switch(choice){
        case 1:
                printf("Enter the element to be pushed:");
                scanf("%d",&data);
                push(data);
                break;
        case 2:
                data = pop();
                printf("Deleted element is %d\n",data);
                break;
        case 3:
                
                printf("The topmost elment of the %d\n", peek());
                break;

        case 4:
                print();
                break;
        case 5:
                exit(1);
        default:
                printf("Wrong choice\n");


        }
    }
    return 0;
    

    

}
void push(int data){
    top = top +1 ;
    stack_arr[top] = data;
}
int pop(){
    int value;
    if(top == -1){
        printf("stack is empty");

    }
    else{
        value = stack_arr[top];
        top = top -1;

    }
    return value;
}
void print(){
    
    if(top == -1){
        printf("stack is empty");
    }
    for(int i=0 ; i<= MAX -1 ; i++){
        printf("%d",stack_arr[i]);
        top = top +1 ;
    }

}
int isEmpty(){
    if(top == -1){
        return 1;
    }
    else
        return 0;
}
int isFull(){
    if(top == MAX){
        return 1;
    }
    else 
        return 0;
}
int peek(){
    if(isEmpty){
        printf("stack underflow");
        exit(1);
    }
    return stack_arr[top];
}

