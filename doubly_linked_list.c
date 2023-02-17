#include<stdio.h>

#include<stdlib.h>
struct node1
{
int data;
struct node1 *next,*pre;
};
typedef struct node1 n1;
n1 *create();
n1 *start=NULL;
n1 *nptr;
n1 *temp;
n1 *ptr;
void inbegin();
void delbegin();
void inend();
void delend();
void inbetw();
void delbetw();
void disforw();
void disbak();
void search();
void main()
{
int choice;
while(1)
{
printf("\n 1.Insert at Begining\t 2.Delete at Begining\n 3.Insert at End\t 4.Delete at End\n 5.Insert in between\t 6.Delete from Between\n 7.Display (Forward)\t 8.Display (Backward)\n 9.Search\t\t 10.Exit");
printf("\nEnter your Choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:inbegin();
break;
case 2:delbegin();
break;
case 3:inend();
break;
case 4:delend();
break;

case 5:inbetw();
break;
case 6:delbetw();
break;
case 7:disforw();
break;
case 8:disbak();
break;
case 9:search();
break;
case 10:exit(0);
break;
default:printf("Invalid Selection!!!\n");
}
}
}
n1 *create()
{
n1 *nptr=(n1*)malloc(sizeof(n1));
if(nptr==NULL)
{
printf("List is full\n");
return 0;
}
else
return nptr;
}
void inbegin()
{
n1 *nptr=create();
int e;
if(nptr==NULL)
printf("List is full\n");
else
{
printf("Enter the element to be inserted : ");
scanf("%d",&e);
nptr->data=e;
if(start==NULL)
{
start=nptr;
nptr->pre=NULL;

nptr->next=NULL;
}
else
{
nptr->next=start;
nptr->pre=NULL;
start->pre=nptr;
start=nptr;
}
}
}
void delbegin()
{
n1 *nptr;
if(start==NULL)
{

printf("List is empty\n");

}
else if(start->next==NULL)
{
printf(" %d Deleted\n",start->data);
start=NULL;
free(start);
}
else
{
nptr=start;
printf(" %d Deleted\n",nptr->data);
start=start->next;
start->pre=NULL;
free (nptr);
}
}
void inend()
{
n1 *nptr=create();
n1 *temp=start;
n1 *ptr;
int e;
printf("Enter the element to be inserted : ");
scanf("%d",&e);

nptr->data=e;
if(temp==NULL)
{
start=nptr;
nptr->next=NULL;
nptr->pre=NULL;
}
else
{
while(temp!=NULL)
{
ptr=temp;
temp=temp->next;
}
ptr->next=nptr;
nptr->next=NULL;
nptr->pre=ptr;
}
}
void delend()
{
n1 *temp,*nptr;
int c=1;
if(start==NULL)

printf("List is empty\n");

else
{
nptr=start;
while(nptr->next!=NULL)
{
temp=nptr;
nptr=nptr->next;
c++;
}
printf(" %d Deleted \n",nptr->data );
temp->next=NULL;
free (nptr);
if(c==1)
start=NULL;
}
}
void inbetw()
{

n1 *nptr=create();
int pos,e,i;
n1 *temp=start;
n1 *ptr;
if(start==NULL)
printf("List is Empty");
else
{
printf("Enter the position and element to be inserted: ");
scanf("%d %d",&pos,&e);
nptr->data=e;
ptr=temp;
nptr->next=NULL;
if(pos==1)
{
nptr->next=start;
start->pre=nptr;
start=nptr;

}
else
{
for(i=1;i<pos;i++)
{
ptr=temp;
temp=temp->next;
}
nptr->next=ptr->next;
ptr->next->pre=nptr;
nptr->pre=ptr;
ptr->next=nptr;
}
}
}
void delbetw()
{
n1 *temp,*nptr;
int c=1,pos,i,f;
if(start==NULL)

printf("List is empty\n");

else
{
printf("Enter the position: ");

scanf("%d",&pos);
temp=start;
nptr=start;
if(pos==1)
{
start=temp->next;
printf(" %d Deleted \n",temp->data );
f=1;
temp->next->pre=NULL;
free(temp);
}
else
{
for(i=1;i<=pos;i++)
{
if(c==pos)
{
nptr->next=temp->next;
printf(" %d Deleted \n",temp->data );
temp->next->pre=nptr;
free (temp);
f=1;
}
nptr=temp;
temp=temp->next;
c++;
}
}
//if(f==0)
// printf("\n Invalid position");
}
}
void disforw()
{
n1 *temp;
temp=start;
if(temp==NULL)
printf("List is Empty\n");
else
{
while(temp!=NULL)
{
printf("%d -> ",temp->data);
temp=temp->next;

}
}
}
void disbak()
{
n1 *temp;
temp=start;
if(temp==NULL)
printf("List is Empty\n");
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
while(temp!=NULL)
{
printf("%d <- ",temp->data);
temp=temp->pre;
}
}
}
void search()
{
n1 *temp;
int val,f=0,c=1;
temp=start;
if(temp==NULL)
printf("\n LIST IS EMPTY");
else
{
printf("\n Enter the element to be searched:");
scanf("%d",&val) ;
while(temp!=NULL)
{
if(temp->data==val)
{
printf(" Element found at position %d ",c);
f=1;
}
temp=temp->next;
c++;

}
if(f==0)
printf("\n Element not found");
}
}
