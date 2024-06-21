#include<iostream>
using namespace std;
void fun(int, string);
int main(){
    fun(101," ");
    return 0;
}
void fun(int id,string name="NA"){
    cout<<id<<" "<<name;
}