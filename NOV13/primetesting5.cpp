#include<iostream>
#include<math.h>
using namespace std;
int t,A[1000005],j=0,B1[1000005],k1=0;
void sieve()
{
    for(int i=0;i<=1000000;i++)
        A[i]=1 ;
    A[0]=0 ;A[1]=0 ;
    for(int i=2;i<=1000000;i++)
    {
    if(A[i]==1)
    {
        j=2*i ;
        while(j<=1000000)
        {
            A[j]=0 ;
            j+=i ;
        }
    }
    }
    for(int i=0;i<=1000000;i++)
    {
        if(A[i]==1)
            {
                //cout<<i<<" ";
                B1[k1++]=i;
            }

    }
    //cout<<k1<<endl;
}

int main()
{
    sieve();
    bool B[1000005];
    bool C[1000005];
    int power[15]={1,2,4,6,10,12,16,18,22,28,30,36};
    cin>>t;
    while(t--)
    {
        for(int i=0;i<1000005;i++)
    	B[i]=true;
    for(int i=0;i<1000005;i++)
    	C[i]=false;
        unsigned long long int l,r,count=0,m,n;
        int index;
        cin>>l>>r;
        if(l==1)
            l+=1;
        //cout<<ceil(2/3)<<endl;
        for(int i=0;i<78498;i++)
        {

        	m=ceil(((1.0)*l)/B1[i]);
        	n=floor((1.0)*r/B1[i]);
        	//cout<<eiA[i]<<" "<<m<<" "<<n<<endl;
        	for(long long int j=m;j<=n;j++)
        		{
        			if(j!=1)
                    	B[j*B1[i]-l]=false;
                }
        }
        //cout<<1<<endl;
        for(int i=0;i<78498;i++)
        {
            if(B1[i]>sqrt(r))
                break;
        	index=0;
        	m=pow(B1[i],power[index]);
        	//cout<<m<<endl;
        	while(m<l)
        	{
        		index++;
        		m=pow(B1[i],power[index]);
        		if(m<=0)
                    break;
        		//cout<<m<<endl;
        	}
        	while(m>=l&&m<=r)
        	{
                C[m-l]=true;
        		index++;
        		m=pow(B1[i],power[index]);
        		if(m<=0)
                    break;
        		//cout<<m<<endl;
        	}
        }
        //for(int i=l;i<=r;i++)
           //cout<<C[i-l]<<endl;
        for(long long int i=l;i<=r;i++)
        {

        		if(B[i-l]==true||C[i-l]==true)
        			{
                        count++;//cout<<i<<endl;
                    }
        }
        //if(r-l==1000000)
          //  cout<<count+1<<endl;

         cout<<count<<endl;
    }
}
