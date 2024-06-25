#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int i=1;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=5)
    {
        if(i==3)
        break;
        cout<<i<<" ";
        i++;
    }
    cout<<i<<" ";
    return 0;
}