#include<iostream>
using namespace std;
int isPrime(int n){
    for (int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void prime_factors(int n){
    for(int i = 2; i<=n;i++){
        if(isPrime(i)){
            int x =i;
            while(n%x==0){
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}
int main (){
    int n ;
    cin>>n;
    prime_factors(n);
    return 0;
}