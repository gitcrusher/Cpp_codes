#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    double x = 1.23, y = 1122456.453;
    cout<<std::scientific;
    cout<<x<<"\n";//1.230000e+000
    cout<<y<<"\n";//1.122456e+006
    cout<<std::setprecision;
    cout<<x<<"\n";//11.230000e+000
    cout<<y<<"\n";//1.122456e+006
    double z = 1.2e+7;
    cout<<z;//1.200000e+007
    return 0;

}