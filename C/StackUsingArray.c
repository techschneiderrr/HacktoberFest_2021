#include <stdio.h>

#define max 100
int st[100];
int top = -1;

void push() {
    int ele;
    top++;
    if(top >= max) {
        printf("Stack is overflow\n");
        return;
    }
    printf("Enter any one element to push in stack: ");
    scanf("%d", &ele);
    st[top] = ele;
    printf("%d pushed successfully in stack.\n", ele);
}

void pop() {
    int ele;
    if(top < 0) {
        printf("Stack is underflow\n");
        return;
    }
    ele = st[top];
    top--;
    printf("%d has been deleted from the stack.\n", ele);
}

void clear() {
    top = -1;
    printf("Stack is cleared.\n");
}

void isEmpty() {
    if(top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty.\n");
    }
}

void isFull() {
    if(top == max - 1) {
        printf("Stack is full.\n");
    } else {
        printf("Stack is not full.\n");
    }
}

void topmost() {
    if(top < 0) {
        printf("Stack is underflow\n");
        return;
    }
    printf("Topmost element in stack is %d\n", st[top]);
}

void seek() {
    int ele, count = 0;
    if(top < 0) {
        printf("Stack is underflow\n");
        return;
    }
    printf("Enter any element to check the occurence in the stack: ");
    scanf("%d", &ele);
    for(int i = 0; i <= top; ++i) {
        if(st[i] == ele) {
            count++;
        }
    }
    printf("%d occurs %d times in the stack.\n", ele, count);
}

void display() {
    if(top < 0) {
        printf("Stack is underflow.\n");
        return;
    }
    for(int i = 0; i <= top; ++i) {
        printf("%d ", st[i]);
    }
    printf("\n");
}

void instructions() {
    printf("You can add upto 100 elements in this Stack.\n");
    printf("Enter 1 to push the element.\n");
    printf("Enter 2 to pop the element.\n");
    printf("Enter 3 to display all the elements.\n");
    printf("Enter 4 to see the topmost element in stack.\n");
    printf("Enter 5 to search the occurence of any element in the stack.\n");
    printf("Enter 6 to check if stack is empty or not.\n");
    printf("Enter 7 to check if stack is full or not.\n");
    printf("Enter 8 to clear the stack.\n");
    printf("Enter 9 to exit.\n");
}

int main() {
    int choice;
    instructions();
    do {
        printf("\nEnter your choice of operation: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: topmost();
                break;
            case 5: seek();
                break;
            case 6: isEmpty();
                break;
            case 7: isFull();
                break;
            case 8: clear();
                break;
            case 9: return 0;
            default:
                printf("Wrong input. Read instructions to use stack efficiently.\n\n");
                instructions();
        }
    } while(1);
    return 0;
}
