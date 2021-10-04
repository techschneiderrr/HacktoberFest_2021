/* Stack */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int g_size;define SIZE 3
int stack[MAX];
int top1=-1,top2=SIZE;
int isEmpty1(){
	if(top1==-1)
		return 1;
	else
		return 0;
}


int isFull(){
	if(top==SIZE-1)
		return 1;
	else
		return 0;
}

void push(int ele){
	if(!isFull())
		stack[++top]=ele;
	else
		printf("Stack is Full\n");
}

int pop(){
	if(!isEmpty())
		return(stack[top--]);
	else
		printf("Stack is Empty\n");
}

void display(){
	int i;
	if(!isEmpty()){
		for(i=0;i<=top;i++)
			printf("%d\t",stack[i]);
	}
	else
		printf("Stack is empty\n");
}
void peek(){
	if(!isEmpty())
		printf("Top element is : %d",stack[top]);
	else
		printf("Stack empty\n");
}
int main(){
	int ele,n,choice;
	printf("Enter the stack size: ");
	scanf("%d",&n);
	stack=dynamic(n);
	
	while(1){
		printf("\n1.Enter the string\n2.exit\n");
	//	printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT\n\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter the element: ");
					scanf("%s",&s);
					for(i=0;s[i]!='\0';i++)
					push(ele);
					break;
			case 2: ele=pop();
					printf("Popped element is : %d\n",ele);
					break;
			case 3: display();
					break;
			case 4: peek();
					break;
			case 5: exit(0);
			default: printf("Invalid Choice\n");
		}
	}
	return 0;
}
