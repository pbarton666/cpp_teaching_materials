#include <iostream>
#include <string>

// Add a constructor (function to set initial parameters)
class GoatClass{
    public:
        // class method (doesn't return anything, hence 'void')
        void say_hi(){
            std::cout << "Hi.  My name is " + name + ", a " + color + " goat." << std::endl;
        }

        // class attributes
        std::string name;
        std::string color;

        // constructor
        GoatClass(std::string name_input, std::string color_input){
            name = name_input;
            color = color_input;
        }
};

int main(){

    GoatClass myBrownGoat("truffle", "brown");     
    GoatClass myWhiteGoat("merangue", "white");

    myBrownGoat.say_hi();
    myWhiteGoat.say_hi();

    // From outside the class, the public members are available.  We can print them:
    std::cout << "brown goat name is: " + myBrownGoat.name << std::endl;
    std::cout << "white goat name is: " + myWhiteGoat.name << std::endl;
    std::cout << "****\n";
    std::cout << "brown goat color is: " + myBrownGoat.color << std::endl;
    std::cout << "white goat color is: " + myWhiteGoat.color << std::endl;
    std::cout << "****\n";

    // ... which is not always a great idea;
    std::cout << "After a quick change ..." << std::endl;
    myBrownGoat.color = "hot pink";
    std::cout << "brown goat color is: " + myBrownGoat.color << std::endl;

    return 0;
}