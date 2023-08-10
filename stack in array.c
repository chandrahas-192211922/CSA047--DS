#include<stdio.h>
#include<stdlib.h>


#define SIZE 10
void push(int);
void pop();
void display();

int stack[SIZE],top= -1;

void main()
{
  int value,choice;
  
while(1){
printf("\n\n***** MENU *****\n");
printf("1.push\n2.pop\n3.Display\n4.Exit");
printf("\nenter your choice:");
scanf("%d",&choice);
switch(choice){
case 1: printf("enter the value to be insert:");
       scanf("%d",&value);
       push(value);
       break;
case 2: pop();
       break;
case 3: display();
       break;
case 4: exit(0);
default: printf("\nwrong selection!!! try again!!!");
}
}
}
void push(int value){
if(top==SIZE-1)
printf("\nstack is full!!! Insertion is Not possible!!!");
else{
top++

stack[top]=value;
printf("\nInsertion success!!!");
}
}
void pop(){
if(top= -1)
printf("\nstack is empty!!! deletion is Not possible!!!");
else{
printf("\ndeleted:%d", stack[top]);
top--;
}
}
void display(){
if(top == -1)
printf("\nstack is empty!!!");
else{
int i;
printf("\nstack elements are:\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
}
