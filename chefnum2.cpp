#include<iostream>
#include<cstdlib>
#include<assert.h>
using namespace std;
void merge(int* arr, int low, int middle, int high)
{
    int* tmp = new int[high-low+1];
    int i = low;
    int j = middle+1;
    int k = 0;
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
/*For an array of size N call with 0 as low and N-1 as high*/void mergeSort(int* arr, int low, int high)
{
    assert(arr);
    if (low < high)
    {
        int middle = (high + low)/2;
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
	int n,A[100006],count=0,index,x;
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
    int sub=0;
    for(int i=index;i>=1;i--)
    {
        if(A[i]+sub<0&&i>=x)
            {
                ans+=(-1*A[i]-sub)*x;
                sub=-1*A[i];
            }
        else if(A[i]-sub<0)
        {
            ans+=(-1*A[i]-sub);
        }

    }
        cout<<ans;
}
