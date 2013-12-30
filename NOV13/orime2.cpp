#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
long long int modulo(long long int a,long long int b,long long int c)
{
    long long int x = 1;
    long long int y = a;
    while(b>0)
    {
                if (b%2==1)
                        x = (x*y)%c;
                y = (y*y)%c;
                b = b/2;
    }
        return x%c;
}
bool Fermat(long long p,int iterations){
    if(p == 1){ // 1 isn't prime
        return false;
    }
    for(int i=0;i<iterations;i++){
        // choose a random integer between 1 and p-1 ( inclusive )
        long long a = rand()%(p-1)+1;
        // modulo is the function we developed above for modular exponentiation.
        if(modulo(a,p-1,p) != 1){
            return false; /* p is definitely composite */
        }
    }
    return true; /* p is probably prime */
}
int main()
{
    int t;
    cin>>t;
    long double m;
    int A[15]={1,2,4,6,10,12,16,18,22,28,30,36};
    while(t--)
    {
        long long int l,r,count=0;
        cin>>l>>r;
        for(long long int i=l;i<=r;i++)
        {
            //cout<<i<<endl;
            for(int j=11;j>=0;j--)
            {
                //cout<<A[j]<<" ";
                m=pow(i,(1.0/A[j]));
                //cout<<m<<endl;
                if(m==(int)m)
                {
                    //cout<<m<<endl;
                    //if((int)m%2!=0)
                    {
                        if(Fermat(m,5))
                        {
                            //cout<<m<<endl;
                            count++;break;
                        }
                    }
                }
            }

        }
        cout<<count<<endl;
    }
}
