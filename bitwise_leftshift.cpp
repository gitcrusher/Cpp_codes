#include<iostream>
using namespace std ;
int main()
{
    int x=3; // 3=0011
    cout<<(x<<1)<<endl; // here it became 0110
    cout<<(x<<2)<<endl; // here it became 1100
    int y=4; //4= 1000
    int z = (x<<y); //110000
    cout<<z;
    return 0;
}