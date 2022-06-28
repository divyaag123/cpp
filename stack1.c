//WAP doubly linked list implementation
#include<stdio.h>
#include<stdlib.h>
#define MAX 4
void push(int data);
int stack_arr[MAX];
int top = -1;
int main(){
    push(1);
    push(3;
    push(4);
    push(5);
    push(6);
    return 0;
}
void push(int data){
    if(top == MAX - 1){
        printf("Stack overflow");
        
    }

    
    top = top + 1;
    stack_arr[top] = data;

}