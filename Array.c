#include<stdio.h>

#include<stdlib.h>

int a[50], pos, elem,i;

int n = 0;

void display();

void insert();

void delete();

void search();

void main()

{

int choice,i,j;

printf("Enter the size of array:");
scanf("%d",&n);
printf("\nEnter the elements of array:\n");
for(i=0;i<n;i++)
        scanf("%d",&a[i]);

            while(1)

            {

             printf("\nMENU\n");

             printf("\n 1. Display");

             printf("\n 2. Insert");

             printf("\n 3. Delete");

             printf("\n 4. Search");

             printf("\n 5. Exit");

             printf("\nEnter your choice: ");

             scanf("%d", &choice);

           switch(choice)

           {

            case 1: display();

                  break;

           case 2: insert();

                  break;

           case 3:delete();

                  break;

           case 4:search();

                  break;


           case 5:exit(1);

                  break;

        default:printf("\nPlease enter a valid choice:");

                        }

            }

}

void display(){
  printf("Array elements are:");
  for(i=0;i<n;i++){
     printf("%d\t",a[i]);
  }
}

void insert(){
  printf("Enter the position where the element to be inserted:");
  scanf("%d",&pos);
  printf("Enter element to be inserted:");
  scanf("%d",&elem);
  for(i=n-1;i>=pos-1;i--){
    a[i+1]=a[i];
  }
  a[pos-1]=elem;
  n++;
  printf("Current Array elements are:");
  for(i=0;i<n;i++){
     printf("%d\t",a[i]);
  }
 
};

void delete(){
  printf("Enter the position where the element to be deleted:");
  scanf("%d",&pos);
  for(i=pos-1;i<n-1;i++){
    a[i]=a[i+1];
  }
  n--;
  printf("Current Array elements are:");
  for(i=0;i<n;i++){
     printf("%d\t",a[i]);
  }
};

void search(){
    int value,flag=0;
    printf("Enter the element to searched:");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
    if(value==a[i])
    {
      flag=1;
      break;
   }
   }
   if(flag==1){
      printf("Element found at position %d",i+1);
   }
   else{
      printf("Element not found...!");
   }
};
