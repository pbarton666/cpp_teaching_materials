#include <iostream>
#include <string>

void pointer(){
    // show off some pointer tricks

    int i = 666;           // var declaration
    int *i_pointer;        // pointer declaration (can hold the address of an integer)

    i_pointer = &i;      //  assign the address (&) of i to the pointer

    // so what can we do?   Here's what we know:
    std::cout << "Hi, my name is 'i'.  My value is " + std::to_string(i) << std::endl;
    std::cout << "I live at:  " << std::hex << i_pointer << std::endl;

    // let's say I don't know the value of i, just the pointer ...
    std::cout << "Value of i from pointer is: " + std::to_string(*i_pointer) <<std::endl;

    // we can change the value of i by resetting the contents of its address.  Here, we
    // assign the value of the de-referenced j_pointer to the de-referenced i_pointer.
    int j = 123;
    int *j_pointer;
    j_pointer = &j;

    *i_pointer = *j_pointer;
    std::cout << "Value of i is: " + std::to_string(i) <<std::endl;
    std::cout << "Value of j is: " + std::to_string(j) <<std::endl;
 
     // we can make a new variable based on the value at the address of an existing one
    int n;
    n = *j_pointer;
    std::cout << "Value of n is: " + std::to_string(n) <<std::endl;
}

int main(){
   pointer();
}

