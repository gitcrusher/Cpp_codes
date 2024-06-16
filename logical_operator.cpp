#include<iostream>
using namespace std;
int main ()
{
    int x = 10, y = 20;
    bool res = (x>0 && x<100);
    cout<<res<<"\n";//1
    res = (x>0|| x>y);
    cout<<res<<"\n";//1
    res=!res;
    cout<<res<<"\n";//0
    return 0; 
} 
