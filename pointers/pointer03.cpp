#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int *p1;
    double*p2;
    string *p3;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    return 0;
}
// the reason of getting the same output is pointers contain addresses and every address are of same size.