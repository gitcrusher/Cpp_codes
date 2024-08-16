#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main(){
    struct employee harry ;
    harry.eId = 1;
    harry.favChar= 'C';
    harry.salary = 5000000000;
    cout<<harry.eId<<endl;
    cout<<harry.favChar<<endl;
    cout<<harry.salary<<endl;
    return 0;
}