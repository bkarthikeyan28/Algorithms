#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<map>
long long int mod(long long int x)
{
    if(x<0)
        return -1*x;
    return x;
}
int main()
{
   vector<int>A;
   vector<int>B;
   vector<int>C;
   map<int,int>grade;
   long long int n,a,b;
   cin>>n;
   for(long long int i=0;i<n;i++)
   {
        cin>>a>>b;
        A.push_back(a);
        C.push_back(a);
        B.push_back(b);
   }
   C.insert(C.end(),B.begin(),B.end());
   sort(C.begin(),C.end());
   for(long long int i=0;i<(n/2);i++)
   {
    grade[A[i]]=1;
    grade[B[i]]=1;
   }
   for(long long int i=0;i<n;i++)
   {
      grade[C[i]]=1;
   }
   for(long long int i=0;i<n;i++)
   {
    if(grade[A[i]]==1)
        cout<<1;
    else cout<<0;
   }
   cout<<endl;
   for(long long int i=0;i<n;i++)
   {
    if(grade[B[i]]==1)
        cout<<1;
    else cout<<0;
   }


}
