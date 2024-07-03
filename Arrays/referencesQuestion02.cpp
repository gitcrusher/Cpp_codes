#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int &fun(){
    static int x=10;
    return x;
}
int main (){
    int &z=fun();// here we got hold on the fun() so we could modify the data 
    cout<<fun()<<" ";
    z=30;// here the value of x is also changed to 30 as we ahve made z as alias to fun()
    cout<<fun();
    return 0;
}