#include<bits/stdc++.h>
using namespace std;
    
int main (){
int * p = new int[100];
for (int i  = 0; i < 1; i++){
    cin >> p[i];
}
cout<<*p<<endl;
delete []p;
cout<<p;
return 0;
}