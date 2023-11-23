#include<stdio.h>

#define N 5

int stack[N];
int top = -1;

void push() {
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    if (top == N - 1) {
        printf("Overflow....\n");
    } else {
        top++;
        stack[top] = data;
    }
}

void pop() {
    int item;
    if (top == -1) {
        printf("Underflow...\n");
    } else {
        item = stack[top];
        top--;
        printf("popped: %d\n", item);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty....\n");
    } else {
        printf("Top: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty...\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("stack[%d]: %d\n", i, stack[i]);
        }
    }
}

int main() {
    int ch;
    do {
        printf("Enter choice: 1: push 2: pop 3: peek 4: display 0: exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exited\n");
                break;
            default:
                printf("Invalid choice....\n");
                break;
        }
    } while (ch != 0);
    return 0;
}
