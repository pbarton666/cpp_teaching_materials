#include <iostream>
#include <string>


    // A function is an isolated piece of code with its own namespace.   You can 
    //  optinally pass it arguments, describe some processing, and return something.
    //
    // Syntax:  
    //    <return_type>  <function name>  ( <comma-separated args>) {
    //        <some stuff>              
    //     }


// Here's a custom function 
int addInts(int arg1, int arg2) 
{
        int sum = arg1 + arg2;
        std::cout <<  "sum from addInts() is: " + std::to_string(sum) << std::endl; 
        return sum;  // not needed if return type is void
}

// main() is a special case of a function (cf. below).   Parameters are optiona.
int main(){
    
    int a{2};
    int b{3};

    // calculate a result from our function
    int result = addInts(a, b);
    std::cout << "result from main: " + std::to_string(result) << std::endl;
    
    // create a local (to main) version of 'sum'; namespace isolation retained.
    int sum {666};
    std::cout << "sum from main: " + std::to_string(sum) << std::endl;

    // it's important to keep track of variable types in caller and destination
    float c{2.9};
    float d{3.9};
    float result1=addInts(c, d);    // returns integer 5
    
}

// alt main signature:
// int main (int argc, char * const arvg[])
//    NB main() would need a return statement

// Declarations versus Definitins

    // Declaration   NB semicolon follows statement.   --> namespace:
    //   If
    // int myfunct();   OR  int myfunct(int, int);   OR int myfunct(int&, int&)  
    //    NB arg types are just documentation unless passed by reference w/ address`

    // Definition:
    // int myfunct(){
    //      int blah;    
    //      }


