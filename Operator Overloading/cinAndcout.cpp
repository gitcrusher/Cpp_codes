#include<bits/stdc++.h>
using namespace std;
    class Student{
        string name;
        int rollno;
        string section;
        int sem ;
        friend void operator>>(istream&,Student&);
        friend void operator<<(ostream&,Student&);
    }; 
    void operator>>(istream&cin,Student&s){
        cin>>s.name>>s.rollno>>s.section>>s.sem;
    }
    void operator<<(ostream&cout,Student &s){
        cout<<s.name<<" "<<s.rollno<<" "<<s.section<<" "<<s.sem<<endl;
    }
int main (){
    Student s1;
    cin>>s1;
    cout<<s1;
return 0;
}