#include<iostream>
#include<math.h>
using namespace std;
long long int trial_divide(long long int N,long long int max) {
  if (N%2 == 0) return 2;
  if (N%3 == 0) return 3;
  long long int Stop;
  if(sqrt(N)<max)
    Stop=sqrt(N);
else Stop=max;
  int di=2;
  for(long long int i=5; i<=Stop; i+=di, di=6-di) {
    if (N%i == 0) return i;
  };
  if (N >= max*max) return 0;
  return N;
}
  long long int modadd(long long int a,long long int b,long long int N) {
    if (a+b > 9007199254740991) {
      long long int  t = ( (a-4503599627370496) + (b-4503599627370495) )%N;
      return ( t + (9007199254740991 % N) );
    }
    return ( (a+b)%N );
  }
  long long int modmult(long long int a,long long int b,long long int N) {
  if (a > N) a = a%N;
  if (b > N) b = b%N;
  if (a*b <= 9007199254740991) {
    return ((a*b)%N);
  } else {
    if (b > a) return modmult(b,a,N);

    // Right to left binary multiplication
    long long int t = 0;
    long long int f = a;
    while (b > 1) {
      if ((b & 1) == 1) t = modadd(t,f,N);
      b = floor(b/2);
      f = modadd(f,f,N);
    };
    t = modadd(t,f,N);
    return t;
  }
}
long long int modpow(long long int a,long long int exp,long long int N) {
  if (exp == 0) return 1;
  long long int t = 1;
  long long int f = a;
  while (exp > 1) {
    if ((exp & 1) == 1) {
      t = modmult(t,f,N);
    }
    exp = floor(exp/2);
    f = modmult(f,f,N);
  };
  t = modmult(t,f,N);
  return t;
}
long long int  SPRP(long long int N,long long int a) {
  long long int d = N-1;
  long long int s = 1;       // Assumes N is odd!
  while ( ((d=d/2) & 1) == 0) s++;  // Using d>>1 changed the sign of d!
  // Now N-1 = d*2^s with d odd
  long long int b = modpow(a,d,N);
  if (b == 1) return true;
  if (b+1 == N) return true;
  while (s-- > 1) {
    b = modmult(b,b,N);
    if (b+1 == N) return true;
  }
  return false;
}
long long int check(long long int N){
   int TrialLimit = 1300; // Should be bigger, like 10000
   int a;
  {
    long long int i = trial_divide(N,TrialLimit);
    if (i > 0 && i != N) {
      return 0;
    } else if (N < TrialLimit*TrialLimit) {
      return 1;
    } else if ( SPRP(N,a=2) && SPRP(N,a=3) && SPRP(N,a=5) && SPRP(N,a=7)
        && SPRP(N,a=11) && SPRP(N,a=13) && SPRP(N,a=17)) {
      if (N < 341550071728321) {
        return 1;
      } else if (N == 341550071728321) {
        return 0;
      } else {
        return 1;
      };
    } else {
      return 0;
    };
  };
}
  int main()
{
    int t;
    cin>>t;
    long double m;
    int A[15]={1,2,4,6,10,12,16,18,22,28,30,36};
    while(t--)
    {
        long long int l,r,count=0;
        cin>>l>>r;
        for(long long int i=l;i<=r;i++)
        {
            /*for(int j=0;j<=11;j++)
            {
                m=pow(i,(1.0/A[j]));
                //cout<<m<<endl;
                if(m==(long long int)m)
                {
                    //if(m==2)
                        //cout<<m<<endl;
                    if((long long int)m%2!=0||m==2)
                    {
                        if(i!=1)
                        {
                        if(check((long long int)m))
                        {
                            //cout<<i<<endl;
                            count++;break;
                        }
                        }
                    }
                }
                */
                if(check(i))
                    count++;
            }
            cout<<count<<endl;

        }

    }

