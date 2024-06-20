#include<iostream>
using namespace std;

int MyMax(int x, int y){
    return(x>y)?x:y;
}
int MyMax(int x, int y, int z){
    return MyMax(MyMax(x,y),z);
}
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<MyMax(a,b)<<"\n";
    cout<<MyMax(a,b,c)<<"\n";
    return 0;
}