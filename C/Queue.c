/* Queue implementation using C */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int Queue[SIZE];
int rear=-1;
int front=-1;
int isEmpty(){
	if(front>rear || rear==-1)
		return 1;
	else
		return 0;
}

int isFull(){
	if(rear==SIZE-1)
		return 1;
	else
		return 0;
}

void enqueue(int ele){
	if(isFull()){
		printf("Queue is is Full\n");
		return;
	}
	if(front==-1)
		front++;
	Queue[++rear]=ele;	
}

int dequeue(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		return;
	}
	else{
		printf("%d\t",Queue[front++]);
	}
}

void display(){
	int i;
	if(isEmpty()){
		printf("Queue is Empty\n");
		return;
	}
	for(i=front;i<=rear;i++)
		printf("%d\t",Queue[i]);
}

int main(){
	int choice;
	while(1){
		printf("\nStack Operations\n");
		printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter the element: ");
					scanf("%d",&ele);
					enqueue(ele);
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("Invalid Choice\n");
		}
	}
}
