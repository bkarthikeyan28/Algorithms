#include<iostream>
//#include<conio.h>
//shell sort algorithm
using namespace std;
int a[40],n;
void insort(int a[],int k,int n);
void shellsort(int a[],int n)
{
     int k=3;
     insort(a,k,n);
     insort(a,k-1,n);
     insort(a,k-2,n);
}
void insort(int a[],int k,int n)
{
     int min,temp,j,pos,i;
     cout<<"size of array is"<<" "<<n;
     cout<<endl;
     cout<<"combining elements"<<"by"<<" "<<k;
     cout<<endl;
     for(int d=0;d<=2;d++)
     {
     for(int i=d;i<n;i+=k)
         {
             min=100;
                 for(j=i;j<n;j+=k)
                 {
                      if(a[j]<min)
                  {   min=a[j];
                      temp=a[j];
                      pos=j;
                  }
                  }
                  temp=a[pos];
                  a[pos]=a[i];
                  a[i]=temp;
         }
     }
         cout<<"array after"<<k<<"pass";
         for(i=0;i<n;i++)
         cout<<a[i];
}
int main()
{
    cout<<"ENTER ARRAY SIZE";
    cout<<endl;
    cin>>n;
    cout<<"ENTER ARRAY";
    cout<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    shellsort(a,n);
    //getch();
}

