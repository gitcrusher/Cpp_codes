#include<iostream>
using namespace std;;

void fun()
{
    static int x =1; //static will run when function will be called for the first time
    int  y = 1;
    x++;
    y++;
    cout<<x<<" "<<y<<endl;
}
int main (){
    fun();
    fun();
    fun();
    return 0;
}