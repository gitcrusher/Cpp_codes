#include<iostream>
using namespace std;
int getMax(int x , int y)
{
    if(x>y)
    return x;
    else
    return y;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<getMax(a,b);
    return 0 ;
}
