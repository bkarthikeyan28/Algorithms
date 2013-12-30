#include<iostream>
using namespace std;
int main()
{
    int b = 1290;
    cout << "b = " << b << endl;
    int c = b << 0;
    cout << "c = " << c << endl;
    c = b >> 12;
    cout << "c = " << c << endl;
}
