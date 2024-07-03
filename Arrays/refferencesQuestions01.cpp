#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int x=10,z=20;
    int &y=x;
    y=z;
    y+=5;
    cout<<x<<"  "<<y<<" "<<z;
    return 0;
}