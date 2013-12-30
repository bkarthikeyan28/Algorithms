#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,pro;
        vector<int>A;
        vector<int>B;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            A.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            B.push_back(x);
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<n;i++)
            pro=A[i]*B[i];
        cout<<pro<<endl;
    }
}
