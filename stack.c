#include<stdio.h>
int stack[50],choice,n,top,x,i;
void push();
void pop();
void display();
void main()
{
    top=-1;
    printf("\n Enter the size of STACK:");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS USING ARRAY");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
    do
    {
        printf("\n Enter your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nEXIT");
                break;
            }
            default:
            {
                printf ("\nPlease enter the valid choice(1/2/3/4)");
            }
        }
    }
    while(choice!=4);
}
void push()
{
    if(top>=n-1)
    {
        printf("\nStack is overflow");

    }
    else
    {
        printf("\nEnter the value to insert:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nStack is underflow");
    }
    else
    {
        printf("\nThe deleted element is: %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nThe elements in STACK:");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\nThe STACK is empty");
    }
}
