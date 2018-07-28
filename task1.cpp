///Please use CodeBlocks 17.12

#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

void location(int *m,int n)
{
    int loc,k, x,lower_bound=1;
    cout<<"Enter index no:\n";
    cin>>k;
    x=sizeof(int);
    loc=int (m)+x*(k-lower_bound);
    cout<<"The address of the desired index is \n\a"<<loc<<endl;
}

void clear_scrn(void)
{
    cout<<endl<<endl<<endl<<"Press Any key to clear the screen :";
    getch();
    system("CLS");
}

void menu(void)
{
    cout<<"0....Exit\n1....View all elements\n2....Insert new element\n3....Search an element\n4....Delete an element\n5....Sort elements in ascending order\n6....Sort elements in descending order\n7....Find memory location of an element\n";
    cout<<endl<<endl<<"Enter your choice : ";
}

int main()
{
    int n,i;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;i<n;i++)
    {
        {
           cin>>arr[i];
        }
    }

menu();
    int c;
    while(cin>>c){
    switch(c)
    {
       case 0 :
           return 0;
       case 1 :{
           for(i=0;i<n;i++)
           {
               cout<<arr[i]<<" ";
           }
           clear_scrn();
           menu();
           }break;

      case 2 :{
           int j,k;
           cout<<"Enter the position where you want to enter new element : "<<endl;
           cin>>j;
           cout<<"Enter the new element:"<<endl;
           cin>>k;
           arr[j-1]=k;
           clear_scrn();
           menu();
           }break;

      case 3 :{
           int x,c=0;
           cout<<"Enter the element you want to search: "<<endl;
           cin>>x;
           for(i=0;i<n;i++)
           {
               if((arr[i])==x)
               {
                   c=1;
                   break;
               }
           }
           if(c==1)
           {
               cout<<"Item is on "<<i+1<<" position"<<endl;
           }
           else if(c==0)
           {
               cout<<"Item is not Found"<<endl;
           }
            clear_scrn();
            menu();
           }break;

       case 4 :{
          int y,c,pos;
          int k=0;
          cout<<"Enter the element you want to delete: "<<endl;
          cin>>y;
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
            cout<<y<<" is found and deletion is successful "<<endl;
         }
         else
            cout<<"Not found"<<endl;
          clear_scrn();
          menu();
         }break;

      case 5 :{
          int t=0;
          for(i=0;i<n;i++)
          {
              for(int j=0;j<(n-1);j++)
                if((arr[j+1])<arr[j])
              {
                  t=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=t;
              }
          }
          cout<<"Sorted elements in ascending order are :"<<endl;
          for(i=0;i<n;i++)
          {
              cout<<arr[i]<<" ";
          }
          clear_scrn();
          menu();
          }break;

      case 6 :{
          int temp=0;
          for(i=0;i<n;i++)
          {
              for(int j=0;j<(n-1);j++)
                if((arr[j+1])>arr[j])
              {
                  temp=arr[j+1];
                  arr[j+1]=arr[j];
                  arr[j]=temp;
              }
          }
          cout<<"Sorted elements in descending order are :"<<endl;
          for(i=0;i<n;i++)
          {
              cout<<arr[i]<<" ";
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
        cout<<"You pressed Wrong keyword"<<endl;
        clear_scrn();
        menu();
          }break;
    }
    }
}

