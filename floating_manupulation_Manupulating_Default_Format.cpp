// std::setprecision(n) --> it sets the total no of digits to be display according to the input given as "n".
//std::showpoint --> 
//std::showpos --> 
//std::uppercase --> 


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<std::setprecision(4);
    double x= 15.5683,y=34267.1;
    cout<<x<<" "<<y<<"\n";// 15.57 3.427e+04
    double z = 1.23;
    cout<<std::showpoint<<z<<"\n";//1.230  //zero is printed as our precission is set to be 4.
    cout<<std::showpos<<z<<"\n";//+1.230
    cout<<std::uppercase<<z<<"\n";//+3.427E+04
    return 0;
}