#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,c=0;
    cin>>n;
    for(int i=2;i<=n;i++)
        if (n%i==0)
        c++;
    
    if (c==1)
    cout<<"Prime No.";
    else
    cout<<"Not A prime No.";
    return 0;
}