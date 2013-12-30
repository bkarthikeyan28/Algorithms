#include<iostream>
//#include<math.h>
using namespace std;
//#define CEILING(X) (X-(unsigned long long int)(X) > 0 ? (unsigned long long int)(X+1) : (unsigned long long int)(X))
int main()
{
    unsigned long long A[100],B[100];
    unsigned long long t,n,k,f;
    float ans;
    cin>>t;
        A[1]=1;
        A[2]=2;
        A[3]=3;
        int i=3;
       while(A[i++]<=59132290782430712)
       {
        if(A[i-1]==59132290782430712)
                break;
            A[i]=A[i-1]*i;
            //cout<<A[64]<<endl;
            if(i%2==0)
                A[i]/=(i/2);
            else A[i]/=((i/2)+1);
            k=i;
            //if(i==64)
                //break;
       }
       A[60]=118264581564861424;
       A[61]=232714176627630544;
       A[62]=465428353255261088;
       A[63]=916312070471295267;
       A[64]=1832624140942590534;
       //cout<<k<<endl;
       //cout<<A[6]<<endl;
    while(t--)
    {
        f=1;
        cin>>n;
        //k=64;
        i=64;
        while(A[i]>=n)
        {
            k=i;
            i--;
            continue;
        }
        //if(A[k-1]==n)
        cout<<k<<endl;

    }


}
