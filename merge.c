#include<stdio.h>
void sort(int[],int);
void display(int[],int);
void merge(int[],int,int[],int,int[]);
void main()
{
  int a[10],b[10],c[10],m,n,i;
  printf("Enter the number of elements in the first array:\t");
  scanf("%d",&m);
  printf("Enter the elements:\t");
  for(i=0;i<m;i++)
    {
       scanf("%d",&a[i]);
    }
  printf("Enter the number of elements in the second array:\t");
  scanf("%d",&n);
  printf("Enter the elements:\t");
  for(i=0;i<m;i++)
    {
       scanf("%d",&b[i]);
    } 
  sort(a,m);
  sort(b,n);
  printf("\nFirst Array is:\n ");
  display(a,m);
  printf("\nSecond Array is:\n ");
  display(b,n); 
  merge(a,m,b,n,c); 
  printf("\nMerged Array is:\n");
  display(c,m+n);
}
void sort(int a[10],int n) 
{
  int i,j,t;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j]) 
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
       }
     }
  }  
}
void display(int a[10],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
   printf("%d\t",a[i]);
  }
}

void merge(int a[10],int m,int b[10], int n,int c[20])
{
  int i,j,k;
  i=0;j=0;k=0;
  while(i<m&&j<n)
  {
    if(a[i]<b[j])
    {
      c[k]=a[i];
      k++;
      i++;
     }
    else
     {
       c[k]=b[j];
       j++;
       k++;
      }
   }     
        
  while(i<m)
   {
      c[k]=a[i];
      k++;
      i++;
    }  
   while(j<n)
   {
      c[k]=b[j];
      k++;
      j++;
    } 
}             
