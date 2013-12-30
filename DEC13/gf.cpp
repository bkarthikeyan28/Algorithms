#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,dist;
    char A[100],B[100];
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>dist;
        float t1=((int)A[0]*10+(int)A[1])*60+((int)A[3]*10+(int)A[4]);
        float t2=((int)B[0]*10+(int)B[1])*60+((int)B[3]*10+(int)B[4]);
        //cout<<t1<<" "<<t2<<endl;
        float tot=t1-t2;
        printf("%.1f\n",tot+dist);
        if(2*dist<tot)
        {
             printf("%.1f\n",tot);
        }
        else  printf("%.1f\n",dist+(tot/2));

    }
}
