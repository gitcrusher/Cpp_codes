#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s1 = "gfg ",s2="Cources";
    string && s3= s1+s2;
    s3= "welcome To " + s3;
    cout<<s3;
    return 0;
}