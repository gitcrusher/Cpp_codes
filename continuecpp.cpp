#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    int n;
    cout<<"Enter no: ";
    cin>>x;
    cout<<"No. not to be printed: ";
    cin>>n;
    for(int i=0;i<=x;i++){
        if(i%n==0){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
    
}