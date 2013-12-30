#include<iostream>
#include<stdio.h>
using namespace std;
#define gc getchar_unlocked
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    int t;
    for(int i=0;i<6;i++)
    {t=read_int();
    cout<<t;}
}
