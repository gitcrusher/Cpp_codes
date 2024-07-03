#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cout<<"Enter your array length: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        x=x+arr[i];
    }
    cout<<x;
    return 0;
}