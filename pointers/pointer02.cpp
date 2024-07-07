#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n=10;
    int *ptr=&n; // this is pointer variables
    cout<<*ptr<<endl;
    n+=30;
    cout<<*ptr<<endl;// here the value of address of n is printed which is 10.
    *ptr+=40;
    cout<<n<<endl;//here address is printed as p = &n; mentioned above.
    return 0;
}