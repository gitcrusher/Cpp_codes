#include<bits/stdc++.h>
using namespace std;
    class A {
        public:
            int a;
    };

    class B: public A{
        public:
            double a;
    };
    
int main (){
    B d1;
    cin>>d1.A::a>>d1.B::a;
    cout<<d1.A::a<<" "<<d1.B::a;
return 0;
}