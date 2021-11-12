#include <iostream>
#include <string>

// Function signatures and calls

void doNothing(){
    // just what you think
}

// This will demand one and only one argument
int oneArg(int arg){
    std::cout << "oneArg: " + std::to_string(arg) << std::endl;
    return arg;
}

// This will require zero or one argument
int oneArgDefault(int arg=1 ){
    std::cout << "oneArgDefault: " + std::to_string(arg) << std::endl;
    return arg;
}

// This will require zero, one, or two args as positionals
int oneArgDefaultTwo(int arg=1, int arg2=2 ){
    std::cout << "oneArgDefaultTwo: " + std::to_string(arg)+ std::to_string(arg) << std::endl;
    return arg;
}
int oneArgByVal(int arg){
    return ++arg;
}

int oneArgByRef(int &arg){
    return ++arg;
}


// Try these out
int main()
{

doNothing();
std::cout << std::endl;

oneArg(666);
std::cout << std::endl;

oneArgDefault();
oneArgDefault(777);
std::cout << std::endl;

oneArgDefaultTwo();         //use both defaults
oneArgDefaultTwo(111);      //override first; use second
oneArgDefaultTwo(111, 222); //override both
std::cout << std::endl;

int arg1 {10};
int arg2 {10};
int result;

std::cout << std::endl;
result = oneArgByRef(arg1);
std::cout << "By reference.  Arg is:  " +  std::to_string(arg1) << std::endl;
std::cout << "Result is " + std::to_string(result) + " Arg is: " + std::to_string(arg1) << std::endl;
std::cout << std::endl;

result = oneArgByVal(arg2);
std::cout << "By value.  Arg is:  " +  std::to_string(arg2) << std::endl;
std::cout << "Result is " + std::to_string(result) + " Arg is: " + std::to_string(arg2) << std::endl;


return 0;

}
   
   
   
//std::cout << "sum from main: " + std::to_string(sum) << std::endl;