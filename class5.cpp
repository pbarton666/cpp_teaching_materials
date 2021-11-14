#include <iostream>
#include <string>

//   Access specifiers can keep class members under wraps

class GoatClass{
    private:
        // class attributes (protected)
        std::string name;
        std::string color;
    public:
        // constructor (public)
        GoatClass(std::string name_input, std::string color_input){
            name = name_input;
            color = color_input;
        }

        // method (public)
        void say_hi(){
            std::cout << "Hi.  My name is " + name + ", a " + color + " goat." << std::endl;
        }
    protected:
        int private_but_inheritable;
};

int main(){

    // public constructors are available
    GoatClass myBrownGoat("truffle", "brown");     
    GoatClass myWhiteGoat("merangue", "white");

   // public methods are available
    myBrownGoat.say_hi();
    myWhiteGoat.say_hi();

    // private class attributes are NOT available
    // std::cout << "brown goat name is: " + myBrownGoat.name << std::endl;
    // std::cout << "white goat name is: " + myWhiteGoat.name << std::endl;
    
    // myBrownGoat.color = "hot pink";
    // std::cout << "brown goat color is: " + myBrownGoat.color << std::endl;

    return 0;
}