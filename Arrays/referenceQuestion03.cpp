#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int x =10,y=20;
    int &z=x;
    z=y;
    z+=5;
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<z<<" ";
    return 0;
}