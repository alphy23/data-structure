#include<stdio.h>

#include<stdlib.h>
#define MAX 10
void insert();
void delete();
void display();
void peek();
int isfull();
int isempty();
int q[MAX],front=-1,rear=-1;
void main()
{
int choice;
while(1)
{
printf("\n1.Insert 2.Delete 3.Display 4.Peek 5.Exit ");
printf("\nEnter your choice ");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:delete();
break;
case 3:display();
break;
case 4:peek();
break;
case 5:exit(0);
break;
default:printf(" Invalid choice");
}
}
}
void insert()
{
int x;
if(isfull())
printf("Queue is full");
else
{

if(front==-1)
front=0;
rear=(rear+1)%MAX;
printf("Enter the value to be inserted ");
scanf("%d",&x);
q[rear]=x;
printf("\n Entered value is %d",x);
}
}
void delete()
{
int x;
if(isempty())
printf("Queue is Empty");
else
{
x=q[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%MAX;
}
printf("deleted element:%d",x);
}
}
void display()
{
int i;
if(isempty())
{
printf("queue is Empty");
}
else
{
printf(" Queue elements are: \n");
for(i=front;i!=rear;i=(i+1)%MAX)
printf("%d \t ",q[i]);
printf("%d",q[i]);
}
}

void peek()
{
printf("front=%d",q[front]);
}
int isempty()
{
if(front==-1)
return(1);
else
return(0);
}
int isfull()
{
if((front==rear+1)||(front==0 && rear==MAX-1))
return(1);
else
return(0);
}
