#include <iostream>
#include <string>

//  Add a class method with parameters

class GoatClass{
    public:
        // This method returns an integer 'int weight';  it gets in integer as input '(int maxWeight)'
        // Placeholder declaration is here:
        std::string report_weight(int maxWeight);   // merely declared here; defined elsewhere.
};

// We can define a class method against the placeholder.   Note that the signature matches.
std::string GoatClass::report_weight(int maxWeight){
    return "GoatClass::report_weight() says: "  + std::to_string(maxWeight) + ". Baaaaa.\n";
};

int main(){

    // Create instances of MyClass and put them through paces.
    GoatClass myGoat;     // create a class instance (really an 'object')
    std::string returned_value = myGoat.report_weight(200);
    std::cout << returned_value;

    return 0;
}