#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<class T>  bool count_values(T n)
{
return n%2==1;

}

int main()
{
vector<int> a={1,2,3,4,5,6,7,8,9,5,10,5,6,3,5,9};

int c= count_if(a.begin(),a.end(),count_values<int>);

cout<<c;
}