#include <iostream>
#include <string>

//  Add a class method 

class MyClass {                
    public:                 
        int aNum;           
        std::string aString;

        // This method is visible / accessible to all
        void pubMethod() {
            std::cout << "Hi from pubMethod().  " << aString << std::endl;
        }
};   

class ThinClass{
    public:
        void thinMethod();   // merely declared here; defined elsewhere.
};

// Externally-defined class method
void ThinClass::thinMethod(){
    std::cout << "ThinClass::thinMethod reporting for duty.  " << std::endl;
};

int main(){

    // Create instances of MyClass and put them through paces.
    MyClass anObj;     // create a class instance (really an 'object')
    anObj.aString = "I an anObj!";
    anObj.pubMethod();

    MyClass anotherObj;  // create another class instance
    anotherObj.aString = "I an anotherObj!";
    anotherObj.pubMethod();

    ThinClass skinny;  // create a class instance
    skinny.thinMethod();


    return 0;
}