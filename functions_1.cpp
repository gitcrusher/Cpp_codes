#include<iostream>
using namespace std;
void fun()
{
    cout<<"fun() called\n";
}
int main (){
    cout<<"Before calling fun()\n";
    fun();
    cout<<"After calling fun()";
    return 0 ;
}