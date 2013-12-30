#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int ans,m=1000000007;
    int t,i,l,j,number,n,il;
    char s[100][150],input[150];
   //cin>>t;
    scanf("%d\n",&t);
    while(t--)
    {
//for(i=0;i<t;i++)
//{


gets(input);
il=strlen(input);
n=1;
l=0;
i=0;

//printf("%d %d\n",n,l);
while(input[i]!='\0')
{
    if(input[i]==' ')
    n++;

    i++;
}
i=0;
while(input[i]!=' ')
{

   i++;
   l=i;
}
if(n==1)
    l=il;


//printf("%d %d\n",n,l);
number=141/(l+1);
//printf("%d\n",number);
       /* r=0;
        for(j=0;j<(i-1);j++)
        {
            for(k=j+1;k<i;k++)
            {
                if(strcmp(s[j],s[k])==0)
                    r++;
            }
        }*/
ans=1;
      for(j=1;j<=number;j++)
      {
          ans*=n;
            ans=ans%m;
      }

printf("%lld\n",ans);

    }
    return 0;
}
