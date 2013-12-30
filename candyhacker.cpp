#include<iostream>
using namespace std;
void merge(long long int*,long long int*,long long int,long long int,long long int);
void mergesort(long long int *a,long long int*b, long long int low, long long int high)
{
    long long int pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
void merge(long long int *a, long long int *b, long long int low, long long int pivot, long long int high)
{
    long long int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;

    while((h<=pivot)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++) a[k]=b[k];
}
 int main()
 {
    long long int n,ans=0,A[100005],S[100005],k,min,index;
    cin>>n>>k;
    for(long long int i=1;i<=n;i++)
        cin>>A[i];
    long long int B[n+1];
    mergesort(A,B,1,n);
    S[0]=0;
    S[1]=A[1];
    for(long long int i=2;i<=n;i++)
        S[i]=A[i]+S[i-1];
    min=A[k]-A[1];
    for(int i=2;i<=n-k+1;i++)
    {
        if(A[i+k-1]-A[i]<min)
            index=i;
    }
    //cout<<index<<endl;
    for(long long int i=k-1;i>=1;i--)
    {
        ans+=(i*A[index+i]);
        //cout<<ans<<endl;
        ans=ans-S[index+i-1];
        //cout<<ans<<endl;
        ans=ans+S[index-1];
        //cout<<ans<<endl;
    }
    cout<<ans;
}
