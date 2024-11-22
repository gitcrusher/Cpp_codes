#include<bits/stdc++.h>
using namespace std;
    
int main (){
    int input, n;
    cout<<"size of vector: ";
    cin>>n;
    vector<int> height(n);
    for(int i = 0 ; i < n ; i++){
        cin>>height[i];
    }

    int mx = height[0];
    int count = 1;

    for(int i = 0 ; i < n ; i ++){
        if(mx<=height[i]){
            mx= height[i];
            cout<<"building "<<i<<": height"<<height[i]<<endl;
        }
    }

    //     if(input ==-1)break;
    //     vec.push_back(input);
    // }

    // auto max = max_element(vec.begin(),vec.end());
    
    // for(size_t i= 0;i<vec.size();i++){
    
    // }
return 0;
}