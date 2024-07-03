#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,40,30,45};
    for(int &x:arr)
        x=x*2;
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}