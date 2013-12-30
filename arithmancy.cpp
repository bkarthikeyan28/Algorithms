#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int days[15];
    while(t--)
    {
        cin>>A;
        int i=0;
        while(A[i]!='-')
        {
            B[i]=A[i];i++
        }
        int j=0;
        while(A[i]!='-')
        {
            C[j++]=A[i];i++;
        }
        int k=0;
        while(A[i]!='-')
        {
            D[k++]=A[i];i++;
        }
        for(int i=2;i<=12;i++)
        {
        if(10*int(D[2])48+int(D[3])-48)%4==0
        {
            if(i==3)
                days[3]=60;
            else if(i%2==0)
            {
            days[i]=days[i-1]+30;
            }
            else days[i]=days[i-1]+31;
        }
        else
        {
            if(i==3)
                days[3]=59;
        else if(i%2==0)
        {
            days[i]=days[i-1]+30;
        }
        else days[i]=days[i-1]+31;
        }
        }
        if()
    }


}

