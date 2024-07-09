# Pointers -->
its a variable holding addresses of literal variables.
 1. Application of pointers in c/c++ -->
    1. changing passed parameter.
    2. passing large objects.
    3. dyanmic memory allocation.
    4. implementing data structure like linked list, tree , BST ,etc.
    5. to do system level programing.
    6. to return multiple  values.
    7. used for accesing array elements.
    8. to pass argument.

# Difference Between Pointers and Arrays -->
Codesnippet--->

      #include<iostream>
      #include<bits/stdc++.h>
      using namespace std;
      int main (){
         int arr[]={10,20,30};
         int*ptr=arr;
         cout<<sizeof(arr)<<"\n";
         cout<<sizeof(ptr)<<"\n";
         cout<<*(arr+2)<<"\n";   // cout<<arr[2]<<"\n";  according to conventions we should write it like this.
         cout<<ptr[2]<<"\n";     // cout<<*(ptr+2)<<"\n";
         return 0;
      }

1. SIZE of Arrays Vs Pointers --> size of arrays are dependent upon user input (in above snippet int arr[]={10,20,30}; the output is 12 as integer value i 4 and elements are 3) && in the case of pointers its machine dependent it can be any values as in my code its 4 NOTE--> but it would be same accros your machine.

2. We could assign array to a pointer vice-versa is not applicable -->
ex. (int*ptr=arr;) ---->> arr=ptr;

3. you can do all the variable arthematic expression on pointer but you cannt do the same onto arrays ---->>
 ptr++; //valid
 arr++; //Invalid

 4. Arrya variables are suppposed to give the address of first elements cause arrays are supposed to be a random access (RANDOM ACCESS)

 Ex-2 -->
   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
   int main (){
      int arr[]={10,20,30};
      int *p1=arr;
      int (*p2)[3]=&arr;
       cout<<*p1<<"\n";
       cout<<**p2<<"\n";
       return 0;
   }

NOTE--> 
1. int *p2=&arr;  would not compile.
2. int *p2[3];    would means an array of pointer of size 3.