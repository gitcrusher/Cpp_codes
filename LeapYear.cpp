#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int year ;
    cout<<"Enter year : ";
    cin>>year;
    if(year%4==0 && year%100!=0){
        cout<<"Leap Year";
    }
    else if (year%400==0){
        cout<<"Leap year";
    }
    else
    cout<<"Not a Leap Year";
    return 0 ;

}