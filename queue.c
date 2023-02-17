#include<stdio.h>
#include<stdlib.h>

#define size 10
void insert(int);
void delete();
void display();
int q[size],front=-1,rear=-1;
void main()
 {
  int x,choice;
  while(1)
  {
    printf("\n1.Insert 2.Delete 3.Display 4.Exit ");
    printf("\nEnter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: printf("Enter the value to be inserted ");
      scanf("%d",&x);
      insert(x);
      break;
      case 2:delete();
      break;
      case 3:display();
      break;
      case 4:exit(0);
      break;
      default:printf(" Invalid choice");
     }
   }
 }
void insert(int x)
{
  if(rear==size-1)
  printf("Queue is full");
  else
  {
    if(front==-1)
    front=0;

    rear++;
    q[rear]=x;
   //printf("successfully Inserted");
  }
}
void delete()
{
  if(front==-1||front>rear)
  printf("Queue is Empty");
  else
  {
    printf("delete: %d ",q[front]);
    front++;
   if(front>rear)
     front=rear=-1;
  }
}
void display()
{
  if(front==-1||front>rear)
  printf("Queue is empty ");
  else
  {
    int i;
    printf(" Queue elements are: \n");
    for(i=front;i<=rear;i++)
    printf("%d \t ",q[i]);
  }
}
