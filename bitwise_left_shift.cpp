#include<iostream>
using namespace std;
int main (){
    int x = 3; //x=00000011
    cout<<(x<<1)<<endl; //00000110
    cout <<(x<<2)<<endl; //00001100
    int y=4;
    int z=(x<<y); //00110000
    cout<<z;
    return 0;
}