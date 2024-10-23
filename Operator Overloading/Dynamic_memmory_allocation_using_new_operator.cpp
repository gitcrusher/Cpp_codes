#include<bits/stdc++.h>
using namespace std;
    
int main (){
    int &x = *(new int(5));
    cout<<x;
return 0;
}
/* new function always return adresses and these addresses could be stored into pointers but if we want to do it with refferences wehave to make the 
new fuction as a pointer value .*/
