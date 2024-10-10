#include<bits/stdc++.h>
using namespace std;
    class Rectangle{
        double length;
        double width;
        public:
        Rectangle(){
            cin>>length;
            cin>>width;
        }
        bool operator<(Rectangle &r){
            if(length*width < r.length*r.width)
            return true;
            else 
            return false;
        }
        
    };
int main (){
    Rectangle r1,r2;
    
    if(r1<r2){
        cout<<"Rectangle 1 is smaller than Rectangle 2";
    }
    else{
        cout<<"Rectangle 1 is not smaller than Rectangle 2";
    }
    
return 0;
}