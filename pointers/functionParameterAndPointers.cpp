#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int *p){
    *p+=5;
}
int main (){
    int n=10;
    fun(&n);
    cout<<n;
    return 0;
}