#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int x=0;
    cin>>n;
    while(n>0){
        n=n/10;
        x++;
    }
    cout<<x;
    return 0;
}