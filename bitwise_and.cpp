#include<iostream>
using namespace std;
int main(){
    int x=3,y=6; //;3=00000011 and 6=00000110 and by and operator we got 00000010 = 2.
    cout<<(x&y);
    return 0;
}