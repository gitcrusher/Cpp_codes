#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int i;
    cout<<"Enter the no of rows: ";
    cin>>i;
    int n;
    cout<<"Enter the no if columns: ";
    cin>>n;
    for(int j=0;j<n;j++){
        for(int k=1;k<i;k++){
            cout<<" * ";
        }
        cout<<" * "<<endl;
    }
    cout<<"The order of matrix is: "<<n<<" x "<<i;
    return 0;
}