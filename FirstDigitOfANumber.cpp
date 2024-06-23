#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int firstNum(int n){
    while(n>10){
        n=n/2;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<firstNum(n);
    return 0;
}