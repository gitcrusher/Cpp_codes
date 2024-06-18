#include<iostream>
using namespace std;
int main ()
{
    int x = 1, y = 2, z = 3,a;
    a= x,y,z;
    cout<<a;
    return 0;
}//here the value of a is x as the precendence of comma operator is less than assingnment operator so a=x will be executed only.