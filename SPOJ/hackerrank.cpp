#include<iostream>
#include<string.h>
using namespace std;
int ans=0;
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int i, int n)
{
   int j;
   if (i == n)
     {
        int n=strlen(a);
        int max=a[0];
        int init=1;
        for(int i=1;i<n;i++)
        {
          if(a[i]>max)
          {
            max=a[i];
            ans+=i;
            init=1;
          }
          else
          {

                      ans+=init;
                      init++;

        }

     }
   }
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
   cout<<ans<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      char A[100];
      cin>>n;
      for(int i=0;i<n;i++)
          cin>>A[i];
        permute(A,0,n-1);

  }
}
