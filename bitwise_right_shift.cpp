#include<iostream>
using namespace std;
int main ()
{
    int x =33; //00100001
    cout<<(x>>1)<<endl; //00010000
    cout<<(x>>2)<<endl; //00001000
    int y = 4;
    int z = (x>>y); //00000010
    cout<<z;
    return 0;
}