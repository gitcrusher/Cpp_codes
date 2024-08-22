#include<iostream>
using namespace std;

int main (){
    int n ;
    cout<<"Running:";
    cin >> n ;
    int flag = 0 ;
    for (int i = 2 ; i <= n-1; i++){// we can also use n/2; too 
        if(n%i==0){
            flag = 1;
            break;
        }
    }
        if(flag == 0){
            cout<<"prime";
        }
        else 
        cout<<"not prime";
    return 0;
}