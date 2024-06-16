#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a=10;
    auto b=15.5;
    cout<<a<<"\n"<<b<<"\n";
    cout<<typeid(a).name()<<"\n";
    cout<<typeid(b).name();
        return 0;
}