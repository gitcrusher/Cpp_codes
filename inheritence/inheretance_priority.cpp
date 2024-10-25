#include<bits/stdc++.h>
using namespace std;
    class A {
        public:
            int a;
    };

    class B: virtual public A{
        public:
            float a;
    };
    
int main (){
    B d1;
    cin>>d1.a>>d1.a;
    cout<<d1.a<<" "<<d1.a;
return 0;
}