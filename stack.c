#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

// Push operation
void push(int item)
{
    if (top >= SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = item;
        printf("Pushed: %d\n", item);
    }
}

// Pop operation
int pop()
{
    if (top < 0)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int item = stack[top];
        top--;
        return item;
    }
}

// Display operation
void display()
{
    int i;

    if (top < 0)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack: ");

        for (i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }

        printf("\n");
    }
}

// Main function
int main()
{
    int item;

    push(10);
    push(20);
    push(30);

    display();

    item = pop();
    printf("Popped: %d\n", item);

    push(40);
    push(50);
    push(60);
    push(70);

    display();

    item = pop();
    printf("Popped: %d\n", item);

    item = pop();
    printf("Popped: %d\n", item);

    item = pop();
    printf("Popped: %d\n", item);

    item = pop();
    printf("Popped: %d\n", item);

    item = pop();
    printf("Popped: %d\n", item);

    display();

    item = pop();
    printf("Popped: %d\n", item);

    return 0;
}
