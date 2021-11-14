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
int oneArgDefault(int x=1 ){
   // We can nest to an arbitrary level
    if (x == 7){
        std::cout << "We still match! \n"  << std::endl;
    }
    else {
        if (x == 5){
            std::cout << "We matched at 5"  << std::endl;
        }
        else {
            if (x == 3) {
                std::cout << "We matched at 3."  << std::endl;
            }
            else {
                std::cout << "We still did not match."  << std::endl;
            }
        }
    }
        return x;
}


// This will require zero, one, or two args as positionals
int oneArgDefaultTwo(int arg=1, int arg2=2 ){
    std::cout << "oneArgDefaultTwo: " + std::to_string(arg)+ std::to_string(arg) << std::endl;
    return arg;
}


// It's possible to pass args by value or by reference

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
   