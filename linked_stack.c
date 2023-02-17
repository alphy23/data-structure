#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
}*top,*top1,*temp;
void push();
void pop();
void display();
void peek();
void create();
void main()
{
int value, choice=0;
while(choice!=5)
{
printf("\n\nThe Main Menu\n");
printf("\n1.Add an Element\n2.Delete an Element\n3.Display all the Elements\n4.Peek\n5.Exit\n");
printf("\nEnter your choice : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
peek();
break;
case 5:
exit(0);
default :
printf("Invalid Choice");
break;
}
}
}
void create()

{
top = NULL;
}
void push()
{
int value;
printf("Enter the Value to be Inserted: ");
scanf("%d", &value);
if (top == NULL)
{
top =(struct node *)malloc(1*sizeof(struct node));
top->link = NULL;
top->data = value;
printf("Value Inserted Successfully\n");
}
else
{
temp =(struct node *)malloc(1*sizeof(struct node));
temp->link = top;
temp->data = value;
top = temp;
printf("Value Inserted on top Successfully\n");
}
}
void display()
{
top1 = top;
if (top1 == NULL)
{
printf("Stack is empty\n");
return;
}
while (top1 != NULL)
{
printf("%d ", top1->data);
top1 = top1->link;
}
}
void pop()
{
top1 = top;
if (top1 == NULL)

{
printf("\nStack is Empty");
return;
}
else
top1 = top1->link;
printf("\nDeleted Element is : %d\n", top->data);
free(top);
top = top1;
}
void peek()
{
if(top==NULL)
printf("Stack is empty");
else
printf("Top Element is %d",top->data);
}
