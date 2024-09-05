#include<bits/stdc++.h>
using namespace std;

// Function to find the sum of all prime numbers in a given range
    void print(int a, int b, int n){
        if (n<=0) return;
        int c = a + b ;
        print(b,c,n-1);
        cout<<a<<" "<<endl;
    }

int main (){
    int n ; 
    cin >> n ;
    int a= 0 ,b = 1; 
    print (a,b,n);
return 0;
}