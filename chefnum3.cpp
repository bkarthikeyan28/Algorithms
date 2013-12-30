#include<iostream>
#include<cstdlib>
#include<assert.h>
using namespace std;
void merge(long long int* arr, long long int low, long long int middle, long long int high)
{
    long long int* tmp = new long long int[high-low+1];
    long long int i = low;
    long long int j = middle+1;
    long long int k = 0;
    while ((i <= middle) && (j <= high))
    {
        if (arr[i] < arr[j])
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];
    }
    if (i <= middle)
    {
        while (i <= middle)
            tmp[k++] = arr[i++];
    }
    if (j <= high)
    {
        while (j <= high)
            tmp[k++] = arr[j++];
    }
    /*See how are we adjusting tmp array index below*/
    for (k = low; k <= high; ++k)
        arr[k] = tmp[k-low];
    delete[] tmp;
    return;
}
/*For an array of size N call with 0 as low and N-1 as high*/void mergeSort(long long int* arr, long long int low, long long int high)
{
    assert(arr);
    if (low < high)
    {
        long long int middle = (high + low)/2;
        mergeSort(arr, low, middle);
        mergeSort(arr, middle+1, high);
        merge(arr, low, middle, high);
    }
    return;
}
/*int Partition(int a[], int beg, int end)          //Function to Find Pivot Point
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
QuickSort(a,p+1,end);    		              //Calls Itself (Recursion)
}
}*/

int main()
{
	long long int n,A[100006],count=0,index,x;
	long long int ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>A[i];
    cin>>x;
    mergeSort(A,1,n);
    for(int i=1;i<=n;i++)
    {
        if(A[i]<0)
            index=i;
        else break;
    }
    if(index>=x)
    {
    ans+=((-1*A[x])*x);
    for(int i=1;i<x;i++)
    {
        A[i]=A[i]-A[x];
        ans+=(-1*A[i]);
    }
    cout<<ans;
    }
    else
    {
    for(int i=1;i<=index;i++)
        ans+=(-1*A[i]);
    cout<<ans;
    }
}
