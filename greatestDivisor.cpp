#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int x=n-1;x<=n;x--){
        if(n%x==0){
            cout<<x;
            break;
        }
    }
    return 0;
}