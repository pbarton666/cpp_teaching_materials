#include <iostream>
#include <string>

// Basic class and class instances

// create a class (really a 'template')
class MyClass {                // name
    public:                    // access specifier
        int aNum;              //   declarations
        std::string aString;
};                             // code block closes with a ';'

int main(){
    MyClass anObj;     // create a class instance (really an 'object')
    anObj.aNum = 666;
    anObj.aString = "I an anObj!";

    MyClass anotherObj;  // create another class instance
    anotherObj.aNum = 3;
    anotherObj.aString = "I an anotherObj!";

    // observer the separation of namespaces
    std::cout << anObj.aString << " My number is: " << anObj.aNum << std::endl;
    std::cout << anotherObj.aString << " My number is: " << anotherObj.aNum<< std::endl;
    
    return 0;
}