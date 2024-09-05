#include<bits/stdc++.h>
using namespace std;
    void print (int n ){
        if (n<=0)return ;
        int r = n%2;
        cout<<r;
        print(n/2);
    }

int main (){
    int n ; 
    cout << "Enter the number of elements: ";
    cin >> n;
    print(n);
return 0;
}