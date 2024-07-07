#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun( string *p){
    cout<<*p;
}
int main (){
    string n="GeeksOfGeeks";
    fun(&n);
    return 0;
}