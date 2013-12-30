#include<iostream>
#include<math.h>
using namespace std;
unsigned long long int trial_divide(unsigned long long int N,unsigned long long int max) {
  if (N%2 == 0) return 2;
  if (N%3 == 0) return 3;
  unsigned long long int Stop;
  if(sqrt(N)<max)
    Stop=sqrt(N);
else Stop=max;
  int di=2;
  for(unsigned long long int i=5; i<=Stop; i+=di, di=6-di) {
    if (N%i == 0) return i;
  };
  if (N >= max*max) return 0;
  return N;
}
  unsigned long long int modadd(unsigned long long int a,unsigned long long int b,unsigned long long int N) {
    if (a+b > 9007199254740991) {
      unsigned long long int  t = ( (a-4503599627370496) + (b-4503599627370495) )%N;
      return ( t + (9007199254740991 % N) );
    }
    return ( (a+b)%N );
  }
  unsigned long long int modmult(unsigned long long int a,unsigned long long int b,unsigned long long int N) {
  if (a > N) a = a%N;
  if (b > N) b = b%N;
  unsigned long long int m;
  m=(a%N*b%N)%N;
  if (m<= 9007199254740991) {
    return ((m)%N);
  } else {
    if (b > a) return modmult(b,a,N);

    // Right to left binary multiplication
    unsigned long long int t = 0;
    unsigned long long int f = a;
    while (b > 1) {
      if ((b & 1) == 1) t = modadd(t,f,N);
      b = floor(b/2);
      f = modadd(f,f,N);
    };
    t = modadd(t,f,N);
    return t;
  }
}
unsigned long long int modpow(unsigned long long int a,unsigned long long int exp,unsigned long long int N) {
  if (exp == 0) return 1;
  unsigned long long int t = 1;
  unsigned long long int f = a;
  while (exp > 1) {
    if ((exp & 1) == 1) {
      t = modmult(t,f,N);
    }
    exp = round(exp/2);
    f = modmult(f,f,N);
  };
  t = modmult(t,f,N);
  return t;
}
bool  SPRP(unsigned long long int N,unsigned long long int a) {
  unsigned long long int d = N-1;
  unsigned long long int s = 1;       // Assumes N is odd!
  while ( ((d=d/2) & 1) == 0) s++;  // Using d>>1 changed the sign of d!
  // Now N-1 = d*2^s with d odd
  unsigned long long int b = modpow(a,d,N);
  cout<<b<<endl;
  if (b == 1) return true;
  if (b+1 == N) return true;
  while (s-- > 1) {
    b = modmult(b,b,N);
    if (b+1 == N) return true;
  }
  return false;
}
unsigned long long int check(unsigned long long int N){
   int TrialLimit = 1300; // Should be bigger, like 10000
   int a;
  {
    unsigned long long int i = trial_divide(N,TrialLimit);
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
    while(t--)
    {
        unsigned long long int n;
        cin>>n;
        if(check(n))
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
