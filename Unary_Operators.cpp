#include<iostream>
using namespace std;
int main()
{
    int x=10, y=x++, z=++x;
    cout<<x<<"\n";
    cout<<y<<"\n";// y=x, x=x+1
    cout<<z<<"\n";// x=x+1, z=x
    return 0;
}