#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int num,first=0,second=1,next;
    cout<<"Enter no: ";
    cin>>num;
    cout<<"Fibonacci Series :"<<endl;

    for(int i=0;i<num;i++){
        cout<<" "<<first;//0//1/0/1//2//3//5
        next=first+second;//1//2//3//5//8
        first=second;//1//1//2//3//5
        second=next;//1//2//3//5//8
    }
    return 0;
}