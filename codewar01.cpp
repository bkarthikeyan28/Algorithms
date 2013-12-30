#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int t;
long long int ans;
cin>>t;
while(t--)
{
int r;
cin>>r;
long double x=1;
for (int i=0;i<10;i++) {  //30 iterations
x=(x+2/x)/2;
}
//cout<<setprecision(100)<<x<<endl;
x*=r;
    //cout<<setprecision(100)<<x<<endl;
    cout<<fixed;
    if(r<10)
    {
        ans=x*1000000;
        cout<<ans/1000000.0<<endl;
    }
    else if(r<100)
    {
        ans=x*10000000;
        cout<<ans/10000000.0<<endl;
    }
     else if(r<1000)
     {
             ans=x*100000000;
        cout<<ans/100000000.0<<endl;
     }
     else if(r<10000)
     {
         ans=x*1000000000;
        cout<<ans/1000000000.0<<endl;
    }
    else if(r=10000)
    {
         cout<<14142.135623<<endl;


    }

}
}
