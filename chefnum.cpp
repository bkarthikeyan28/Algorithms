#include<iostream>
#include<cstdlib>
#include<assert.h>
using namespace std;
int Partition(int a[], int beg, int end)          //Function to Find Pivot Point
{
int p=beg, pivot=a[beg], loc;

for(loc=beg+1;loc<=end;loc++)
{
if(pivot>a[loc])
{
a[p]=a[loc];
a[loc]=a[p+1];
a[p+1]=pivot;

p=p+1;
}
}
return p;
}


void QuickSort(int a[], int beg, int end)
{
if(beg<end)
{
int p=Partition(a,beg,end);                       //Calling Procedure to Find Pivot

QuickSort(a,beg,p-1);                             //Calls Itself (Recursion)
QuickSort(a,p+1,end);			              //Calls Itself (Recursion)
}
}

int main()
{
	int n,A[100006],count=0,ans=0,index,x;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
    cin>>x;
    QuickSort(A,0,n-1);
    //cout<<A[0]<<endl;
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
            count++;
    }
    if(count==0)
        cout<<0<<endl;
    //cout<<count<<endl;
    while(count!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(A[i]<0)
            {
                index=i;
            }
            else break;
        }
        if(count>=x)
            {
                int diff=(-1*A[index]);
               ans+=diff*x;
               for(int i=0;i<n;i++)
                    {
                        A[i]+=(diff);
                        if(A[i]==0)
                            count--;
                    }
                    //cout<<ans<endl;
                    //cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<endl;
                    //cout<<count<<endl;

                }

        else
        {

            for(int i=0;i<n;i++)
            {
                if(A[i]<0)
                    {
                        ans+=(-1*A[i]);
                    }
                count=0;
            }
        }
    }
    if(ans!=0)
    cout<<ans<<endl;

}
