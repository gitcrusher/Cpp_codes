#include<bits/stdc++.h>
using namespace std;
    class A {
        public:
            int a;
    };

    class B: virtual public A{
        public:
            int b;
    };
    
    class C: virtual public A{
        public:
            int c;
    };

    class D:public B,public C{
        public:
            int d;
    };
int main (){
    D d1;
    cin>>d1.a>>d1.b>>d1.c>>d1.d;
    cout<<d1.a<<" "<<d1.b<<" "<<d1.c<<" "<<d1.d;
return 0;
}