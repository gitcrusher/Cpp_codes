#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Max(int arr[],int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = Max(arr,n);
    
    cout<<ans;

    return 0;
}