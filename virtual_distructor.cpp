#include<bits/stdc++.h>
using namespace std;
    class A{
        public:
        A(){
            cout<<"Class A Object created"<<endl;
        }
        virtual ~A(){
            cout<<"Class A Object destroyed"<<endl;
        }
    };

    class B : public A{
        public:
        B(){
            cout<<"Class B Object created"<<endl;
        }
        ~B(){
            cout<<"Class B Object destroyed"<<endl;
        }
    };

    class C : public B{
        public:
        C(){
            cout<<"Class C Object created"<<endl;
        }
        ~C(){
            cout<<"Class C Object destroyed"<<endl;
        }
    };

    class D : public C{
        public:
        D(){
            cout<<"ClassD Object created"<<endl;
        }
        ~D(){
            cout<<"ClassD Object destroyed"<<endl;
        }
    };

int main (){
    A*a1= new D();

    delete a1;
return 0;
}