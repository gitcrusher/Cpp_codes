#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vect{10,20,30,40};
    for(auto &x:vect) // to modify it we have to use instead of x ,&x 
    x=x+5;
    for(auto x:vect)
    cout<<x<<" ";
    return 0;
}