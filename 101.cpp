#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int t,a;
    unsigned long long int ans;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a%2==0)
        {
            ans=(a/2)*(a/2);
            cout<<ans<<endl;
        }
        else
        {
            ans=(a/2)*((a/2)+1);
            cout<<ans<<endl;
        }
    }
}
