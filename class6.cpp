#include <iostream>
#include <string>

//   Access specifiers can keep class members under wraps

class GoatClass{
    private:
        // class attributes (private)
        std::string name;
        std::string color;        
        
        // constructor (private)
        // GoatClass(std::string name_input, std::string color_input){
        //     name = name_input;
        //     color = color_input;            
        // }

    public:
        // method (public)
        void say_hi(){
            std::cout << "Hi.  My name is " + name + ", a " + color + " goat." << std::endl;
        }

        // setter for color (public)
        void setColor(std::string trial_color){
            if (trial_color != "white" && trial_color != "brown" && trial_color != "white"){
                std::cout << "Sorry. " + trial_color + " is a stupid color for a goat." << std::endl;
                std::string placeholder_color = "brown";
                std::cout << "We're making it " + placeholder_color + ".\n";
                color = placeholder_color;
            }
            else {
                color = trial_color;
            }
        }
        // getter for color (public) - internal method, so can access private members
        std::string getColor(){
            return color;
        }

        // setter for name (public)
        void setName(std::string trial_name){
            name = trial_name;
        }

        // getter for name (public)
        std::string getName(){
            return name;
        }

};

int main(){

    // public constructors are available
    GoatClass myBrownGoat;
    GoatClass myWhiteGoat;

    myBrownGoat.setName("Truffle");
    myBrownGoat.setColor("brown");
    myWhiteGoat.setName("Merangue");
    myWhiteGoat.setColor("white");

   // public methods are available
    myBrownGoat.say_hi();
    myWhiteGoat.say_hi();

    // the color attribute is now protected
    myBrownGoat.setColor("hot pink");

    myBrownGoat.say_hi();

    return 0;
}