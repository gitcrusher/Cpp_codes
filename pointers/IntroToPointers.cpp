#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n=10;
    int *p; // this is pointer variables
    p=&n;
    cout<<n<<endl;// here n is printed
    cout<<*p<<endl;// here the value of address of n is printed which is 10
    cout<<p<<endl;//here address is printed as p = &n; mentioned above.
    return 0;
}