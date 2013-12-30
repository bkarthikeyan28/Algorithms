// The largest integer Java natively supports is 2^53-1, so these
// routines are designed to work for *positive* integers up to that.

// Currently the function check does the idiot proof to see only positive
// integers (not too large) are passed to the other routines.


// trial_divide(N,max) uses trial division to seek the smallest
// prime divisor of N, returns 0 if none found.
#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
// modmult(a,b,N) finds a*b (mod N) where a, b, and N can be
// up to (2^53-1)/2.  Might up this to 2^53-1 eventually...
  long long int modadd(long long int a,long long int b,long long int N) {
  // When the integers a, b satisfy a+b > 2^53-1, then (a+b)%N is wrong
  // so we add this routine to allow us to reach a, b = 2^53-1.
    if (a+b > 9007199254740991) {
      // Could reduce a and b (mod N) here, but assuming that has already been done
      // won't hurt if not... subtract 2^52 from one, 2^52-1 from the other and the
      // add it back modulo N (MaxInt+1)
      long long int  t = ( (a-4503599627370496) + (b-4503599627370495) )%N;
      return ( t + (9007199254740991 % N) );
    }
    // Usual case: a + b is not too large:
    return ( (a+b)%N );
  }
  unsigned long long int fast_exp(unsigned long long int base,unsigned long long int exp,unsigned long long int mod)
{
    unsigned long long int k;
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            k=(fast_exp(base,exp/2,mod))%mod;
            //cout<<k<<endl;
            unsigned long long int base1=(k*k)%mod;
            if(base1 >= mod)
            return base1%mod;
            else
            return base1;
        }
        else
        {
            k=fast_exp(base,(exp-1)/2,mod);
            //cout<<k<<endl;
            unsigned long long int ans=(((base*k)%mod)*k)%mod;
            if(ans >= mod)
            return ans%mod;
            else
            return ans;
        }
    }
}

unsigned long long int modmult(long long int a,long long int b,long long int N) {
  if (a > N) a = a%N;
  if (b > N) b = b%N;
  unsigned long long int m=(a%N*b%N)%N;
  cout<<m<<endl;
  if (m<= 9007199254740991) {
    return (m%N);
  } else {
    if (b > a) return modmult(b,a,N);

    // Right to left binary multiplication
    long long int  t = 0;
    long long int f = a;
    while (b > 1) {
      if ((b & 1) == 1) t = modadd(t,f,N);
      b = floor(b/2);
      f = modadd(f,f,N);
    }
    t = modadd(t,f,N);
    return t;
  }
}

// modpow(a,exp,N) finds a^exp (mod N) where a, b, and N are
// limited by modmult

long long int  modpow(long long int a,long long int exp,long long int N) {
  if (exp == 0) return 1;

  // Right to left binary exponentiation
  long long int  t = 1;
  long long int  f = a;
  //cout<<t<<" "<<f<<" "<<N<<endl;
  while (exp > 1) {
    if ((exp & 1) == 1) {  // if exponent is odd
      t = modmult(t,f,N);
      //cout<<t<<endl;
    }
    exp = floor(exp/2);
    f = modmult(f,f,N);
  }
  t = modmult(t,f,N);
  return t;
}

// SPRP(N,a) checks if N (odd!) is a strong probable prime base a
// (returns true or false)

bool SPRP(long long int N,long long int a) {
  long long int  d = N-1, s = 1;  			// Assumes N is odd!
  while ( ((d=d/2) & 1) == 0) s++;// Using d>>1 changed the sign of d!
  //cout<<a<<" "<<d<<" "<<s<<endl;
  // Now N-1 = d*2^s with d odd
  long long int  b = fast_exp(a,d,N);
  cout<<b<<endl;
  if (b == 1) return true;
  if (b+1 == N) return true;
  while (s-- > 1) {
    b = modmult(b,b,N);
    cout<<b<<endl;
    if (b+1 == N) return true;
  }
  return false;
}

// The idiot proofing, answer returning script

int  check(long long int N){
  int TrialLimit = 1300; // Should be bigger, like 10000
  int a;
    if ( SPRP(N,a=2) && SPRP(N,a=3) && SPRP(N,a=5) && SPRP(N,a=7)
    		&& SPRP(N,a=11) && SPRP(N,a=13) && SPRP(N,a=17)) {
      // Some of these tests are unnecessary for small numbers, but for
      // small numbers they are quick anyway.
      if (N < 341550071728321) {
        return 1;
      } else if (N == 341550071728321) {
        return 0;
      } else {
        return 1;
      }
    } else {
      return 0;
    }
  }

  bool Miller(long long p,int iteration){
    if(p<2){
        return false;
    }
    if(p!=2 && p%2==0){
        return false;
    }
    long long s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<iteration;i++){
        long long a=rand()%(p-1)+1,temp=s;
        long long mod=modpow(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=modmult(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}
/* Fermat's test for checking primality, the more iterations the more is accuracy */
bool Fermat(long long p,int iterations){
    if(p == 1){ // 1 isn't prime
        return false;
    }
    for(int i=0;i<iterations;i++){
        // choose a random integer between 1 and p-1 ( inclusive )
        long long a = rand()%(p-1)+1;
        // modulo is the function we developed above for modular exponentiation.
        if(modpow(a,p-1,p) != 1){
            return false; /* p is definitely composite */
        }
    }
    return true; /* p is probably prime */
}

  int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(check(n))
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

