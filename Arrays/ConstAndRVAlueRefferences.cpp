#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(string &&s){
    s="hi "+s;
    cout<<s;
}
int main (){
    fun("User");
    return 0;
}