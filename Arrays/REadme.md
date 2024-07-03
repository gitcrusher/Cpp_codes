#Arrays
Types of array in cpp
    1.Fixed Size Arrays
        a.Allocater in funtion call Stack
            int arr[100];
            int arr[n];
            int arr[]={10.20,30,40};
        b.Allocated on Heap
            int *arr= new int [n];
    2.Dynamic Sized Arrays
        vextor in c++ STL

#Refference in C++
example-
    int main (){
        int x=10;
        int &y=x;
        cout<<y<<" ";  //10
        x=x+5;
        cout<<x<<" ";  //15
        y=y+5;
        cout<<x<<" ";  //20
        return 0;
    }