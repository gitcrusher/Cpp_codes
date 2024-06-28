#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x;
    cout<<"Enter table you want :";
    cin>>n;
    cout<<"Enter tables till we want :";
    cin>>m;
    for(int i=1;i<m+1;i++){
        x=n*i;
        cout<<x<<endl;
    }
    return 0;
}