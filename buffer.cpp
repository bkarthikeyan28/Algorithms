// list::push_front
#include <iostream>
using namespace std;
#include <list>

int main ()
{
    list<int>::iterator i;
  list<int> mylist (2,100);         // two ints with a value of 100
  mylist.push_front (200);
  mylist.push_front (300);
  mylist.push_back(99);

  cout << "mylist contains:";
  for (i=mylist.begin(); i!=mylist.end(); ++i)
    cout << ' ' << *i;

  cout << '\n';
  return 0;
}
