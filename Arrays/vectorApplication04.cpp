
//avoiding copy of large objects in each loops
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>vect{"geeksforgeeks practice",
    "geeksforgeeks ide","geeksforgeeks write"
    };
    for(const auto &x: vect){
        cout<<x<<" ";
    }
    return 0;
}