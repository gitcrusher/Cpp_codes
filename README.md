# CPP Rules
# NOTE-
1. ([]) these are use to show the code snippet so while writing plaz avoid thses and cosider the inside codes.
2. 
# PART-1
  1. C++ Output
  2. C++ Variable
  3. C++ Identifiers
  4. C++ Data Types
  5. C++ User Input
    1.1 OUTPUT/PRINTING
         ([cout<<"Hello World!";])
         here we use (cout) fuction in the place of print,printf in rescpective python, C language it basically help to print out
     
  -> so the basic code whcih we write to print hello world! in c++ is given below:
    #include <iostream>
    using namespace std;
    int main()
    {
      // prints hello wolrd in C++
       cout <<"Hell0"<<endl<<"World!";
       return 0;
    }

    # BASIC CODE IN-DEPTH DETAILS
     1. ([ #inculde <iostream>]) so whenever someting is written after #include its said to be a directive and these directives are processed by pre-processor.
           A. PRE-PROCESSOR -> its a program runned by a complier.
           iostream is a popular header file includes inout ouput functions.
     2. ([using namespace std;])  its like we are using namespace whose name is (std) 
         note if std line is not written the you might have to right ([cout<<"Hello World!";]) as ([std::cout"Hello Worls";])
     3.([int main(){ }]) -> its a basic main fucntion as complier looks for main fution dosent matter the position and also it contains what are operation to be executed.
       defination of fuction is ([retuntype funtion_name(){ }])
     4. ([return 0;]) it make coplire to understant that the cod eis completed.
     5. ([endl]) to print output in next line.
  2. C++ Variable
     variable_type variable_name = [=value];
     # NOTE RULES FOR NAMING VARIABLES ->
        1.variable name should not begin with number.
         

     
    

