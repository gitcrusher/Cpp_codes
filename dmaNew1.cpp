#include<bits/stdc++.h>
using namespace std;
    
int main (){
    int* number = new int[100];
    int num , count = 0;
    int sum = 0;
    while(cin>>num && num>=0){
        if(count<100){
            number[count++]=num;
            sum+=num;
        }
    }
        double average = static_cast<double>(sum)/count;
        cout<<"Sum: "<<sum<<endl;
        cout<<"Average: "<<fixed<<setprecision(2)<<average<<endl;
        delete[] number;
return 0;
}