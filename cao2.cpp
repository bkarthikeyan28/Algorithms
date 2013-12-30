#include<iostream>
using namespace std;
int minimum(int a,int b,int c,int d)
{
    int min1,min2;
    if(a<b) min1=a;else min1=b;
    if(c<d) min2=c;else min2=d;
    if(min1<min2);
    else min1=min2;
    return min1;
}
int main()
{
    int t;
    char A[505][505];
    int left[505][505],right[505][505],top[505][505],bottom[505][505];
    int P[62]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293};
    cin>>t;
    while(t--)
    {
        int ans=0;
        int row,col;
        cin>>row>>col;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>A[i][j];top[i][j]=0;bottom[i][j]=0;left[i][j]=0;right[i][j]=0;
            }
        }
        for(int j=0;j<col;j++)
        {
            top[0][j]=0;
            bottom[row-1][j]=0;
        }
        for(int i=0;i<row;i++)
        {
            left[i][0]=0;
            right[i][col-1]=0;
        }
        //cout<<top[0][0];
        for(int i=1;i<row-1;i++)
        {
            for(int j=1;j<col-1;j++)
            {
                if(A[i-1][j]=='#')
                    top[i][j]=0;
                else if(A[i-1][j]=='^')
                    top[i][j]=top[i-1][j]+1;
                if(A[row-i][j]=='#')
                    bottom[row-i-1][j]=0;
                else if(A[row-i][j]=='^')
                    bottom[row-i-1][j]=bottom[row-i][j]+1;
                if(A[i][j-1]=='#')
                    left[i][j]=0;
                else if(A[i][j-1]=='^')
                    left[i][j]=left[i][j-1]+1;
                if(A[i][col-j]=='#')
                    right[i][col-j-1]=0;
                else if(A[i][col-j]=='^')
                    right[i][col-j-1]=right[i][col-j]+1;
            }
        }
        int count=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(A[i][j]=='#')
                    continue;
                else
                {
                int min=minimum(top[i][j],bottom[i][j],left[i][j],right[i][j]);
                for(int k=0;k<62;k++)
                    {
                        if(P[k]<=min)
                            {count++;}
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}
