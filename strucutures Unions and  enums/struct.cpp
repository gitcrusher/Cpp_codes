#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

int main(){
    ep harry ;
    ep shubham ;
    ep roahanDas;
    harry.eId = 1;
    harry.favChar= 'C';
    harry.salary = 5000000000;
    cout<<harry.eId<<endl;
    cout<<harry.favChar<<endl;
    cout<<harry.salary<<endl;
    return 0;
}