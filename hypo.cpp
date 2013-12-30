#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define getcx getchar_unlocked
inline void inp( int &n )//fast input function
{
   n=0;
   int ch=getcx();int sign=1;
   while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   n=n*sign;
}
int main()
{
    int t;
    inp(t);
    while(t--)
    {
        long long int s,f=1;
        //inp(s);
        cin>>s;
        while(a*a+b*b)
        if(f==1)
            cout<<"IMPERFECT"<<endl;

    }
}

