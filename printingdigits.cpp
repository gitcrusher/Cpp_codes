#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int i=1;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n)
    {
        if(i==n)
        break;
        cout<<i<<" ";
        i++;
    }
    cout<<i<<" ";
    return 0;
}