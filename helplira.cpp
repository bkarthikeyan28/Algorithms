#include<iostream>
#include<cstdlib>
using namespace std;
int ar(int a,int b,int c,int d,int e,int f)
{
    return abs((a*(d-f)+c*(f-b)+e*(b-d))/2);
}
int main()
{
    int n,a,b,c,d,e,f,minc,maxc,min,max;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c>>d>>e>>f;
        int area=ar(a,b,c,d,e,f);
        if(i==1)
        {
            min=area;max=area;minc=1;maxc=1;
        }
        else
        {
        if(area<=min)
            {
                minc=i;min=area;
            }
        if(area>=max)
            {
                maxc=i;max=area;
            }
        }
    }
    cout<<minc<<" "<<maxc<<endl;
    cout<<min<<" "<<max<<endl;
}
