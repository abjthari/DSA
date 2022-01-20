#include<stdio.h>
#include<conio.h>
#include<process.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
void push();
int pop();
int peek();
void display();
int main()
{
    int ch;
    while(1)
    {
        system("cls");
        printf("Press 1 for push\n");
        printf("Press 2 for pop\n");
        printf("Press 3 for peek\n");
        printf("Press 4 for display\n");
        printf("Press 5 for exit\n");
        printf("Select your Option\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            push();
        }
        else if(ch==2)
        {
            printf("Popped data = %d\n",pop());
            getch();
        }
        else if(ch==3)
        {
            printf("Peeked data = %d\n",peek());
            getch();
        }
        else if(ch==4)
        {
            display();
            getch();
        }
        else if(ch==5)
        {
            exit(0);
        }
    }
    return;
}
void push()
{
    if(top==SIZE-1)
    {
        printf("Stack Overflow\n");
        return;
    }
    printf("Push data\n");
    scanf("%d",&stack[++top]);
}
int pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
int peek()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top];
}
void display()
{
	int i;
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return;
    }
    for(i=top; i>=0; i=i-1)
    {
        printf("%d\n",stack[i]);
    }
}
