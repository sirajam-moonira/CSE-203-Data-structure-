///Please use CodeBlocks 17.12

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void location(int *m,int n)
{
    int loc,k, x,lower_bound=1;
    printf("Enter index no:\n");
    scanf("%d",&k);
    x=sizeof(int);
    loc=(int)m+x*(k-lower_bound);
    printf("The address of the desired index is %d\n\a",loc);
}


void clear_scrn(void)
{
    printf("\n\n\nPress any key to clear the screen :");
    getch();
    system("CLS");
}


void menu(void)
{
  printf("0....Exit\n1....View all elements\n2....Insert new element\n3....Search an element\n4....Delete an element\n5....Sort elements in ascending order\n6....Sort elements in descending order\n7....Find memory location of an element\n");
  printf("\n\n\nEnter Your choice : ");
}


int main()
{
    int n,i,j;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++)
    {
        {
           scanf("%d",&arr[i]);
        }
    }
    menu();
    int s;
    while(scanf("%d",&s)){
    switch(s)
    {
       case 0 :
           return 0;

       case 1 :{
           for(i=0;i<n;i++)
           {
               printf("%d ",arr[i]);
           }
           clear_scrn();
           menu();
           }break;

       case 2 :{
           int m,n;
           printf("Where do you want to insert an element?\n");
           scanf("%d",&m);
           printf("Enter the new element:\n");
           scanf("%d",&n);
           arr[m-1]=n;
            clear_scrn();
            menu();
           }break;

      case 3 :{
           int x,ck=0;
           printf("Enter the element you want to search: \n");
           scanf("%d",&x);
           for(i=0;i<n;i++)
           {
               if((arr[i])==x)
               {
                   ck=1;
                   break;
               }
           }
           if(ck==1)
           {
               printf("Item is found on %d position\n",i+1);
           }
           else if(ck==0)
           {
               printf("Item is not Found\n");
           }
            clear_scrn();
            menu();
           }break;

       case 4 :{
          int y,c,pos;
          int k=0;
          printf("Enter the element you want to delete: \n");
          scanf("%d",&y);
          for(i=0; i<n; i++)
          {
            if((arr[i])==y)
            {
                arr[i]=arr[i+1];
                pos=i;
                k=1;
                break;
            }
         }
         if(k==1)
         {
            for (c = pos; c < n; c++)
                arr[c]=arr[c+1];
            n=n-1;
            printf("%d Found and deletion is successful \n",y);
         }
         else
            printf("Not found");
          clear_scrn();
          menu();
         }break;

      case 5 :{
          int temp=0;
          for(i=0;i<n;i++)
          {
              for(j=0;j<(n-1);j++)
                if((arr[j+1])<arr[j])
              {
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
              }
          }
          printf("Sorted elements in ascending order are :\n");
          for(i=0;i<n;i++)
          {
              printf("%d ",arr[i]);
          }
          clear_scrn();
          menu();
          }break;

      case 6 :{
          int temp=0;
          for(i=0;i<n;i++)
          {
              for(j=0;j<(n-1);j++)
                if((arr[j+1])>arr[j])
              {
                  temp=arr[j+1];
                  arr[j+1]=arr[j];
                  arr[j]=temp;
              }
          }
          printf("Sorted elements in descending order are :\n");
          for(i=0;i<n;i++)
          {
              printf("%d ",arr[i]);
          }
          clear_scrn();
          menu();
          }break;

      case 7 :{
          location(arr,n);
            clear_scrn();
          menu();
          }break;

      default:{
        printf("You pressed Wrong keyword\n");
        clear_scrn();
        menu();
          }break;
          }
    }
}

