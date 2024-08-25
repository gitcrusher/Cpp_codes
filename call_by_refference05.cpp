#include<iostream>
using namespace std;
int main (){
    int n,r=0;
    cin >> n ;
    for(int i =1; i<n+1;i++){
        if(n%i==0){
            r=r+i; 
        }
        
    }
        cout<<r;
    return 0;
}