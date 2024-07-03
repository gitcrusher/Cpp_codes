#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool Check(int arr[],int n){
    for(int i=1;i<n;i++){
        if (arr[i]<arr[i-1]){
            return false;
        }
        return true;
    }
}
int main()
{
    int n,x;
    cout<<"Enter the length of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(Check(arr,n)==false){
        cout<<"Not Sorted";
    }
    else
    cout<<"Sorted";
    return 0;
}