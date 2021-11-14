#include <iostream>
#include <string>
int main(){
    //using std::cout, std::cin, std::hex, std::string, std::to_string;
    
    std::string dog = "quinn";

    // string* creates a pointer variable  (pointers hold addresses, and they know var length)
    // ptr is the name
    // &dog is the address of the variable dog
    std::string* ptr = &dog;

    // You might also see these (but above is preferred):
    // string *ptr;
    // string * ptr;

    // when '*' is not used in a declaration, it 'dereferences' (grabs value)

    std::cout << "The value tied to ptr is: " << *ptr << std::endl ;
    std::cout << "The address of dog is: " << &dog << std::endl;
    std::cout << "The value of dog is: "  << dog<< std::endl;

    std::cout << "\n****\n";
    //  We can change the value in the memory address associated with the name 'dog' w/ another string:

    *ptr = "alt dog name";

    std::cout << "The value tied to ptr is: " << *ptr << std::endl;
    std::cout << "The address of dog is: " << &dog << std::endl;
    std::cout << "The value of dog is: "  << dog << std::endl;

    //

    std::cout << std::endl;
}