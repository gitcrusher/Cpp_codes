#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[]={10,20,30};
    int *p1=arr;
    int (*p2)[3]=&arr;
    cout<<*p1<<"\n";
    cout<<**p2<<"\n";
    return 0;
}