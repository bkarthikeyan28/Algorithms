# include <stdio.h>
# include <math.h>
int main()
{
    long int t,count,y,n;
    scanf("%ld",&t);
    while(t--)
    {
              count=0;
              scanf("%ld",&n);
              while(n!=0)
              {
                         y=(int)sqrt(n);
                         count++;
                         n=n-y*y;
                         }
                         printf("%ld\n",count);
                         }
                         return 0;
                         }
