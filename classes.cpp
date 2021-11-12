#include <iostream>
#include <string>

class Dog
{
private:
    std::string name;
    int weight;
    std::string toy;

public:
    // getters
    std::string getName()  const { return name;   } 
    int   getWeight()  const  { return weight; }
    std::string getToy()  const  { return toy; }

    // setters
    void  setName(std::string dogname) { name = dogname; }
    void  setWeight(int dogweight) { weight = dogweight; }
    void  setToy(std::string dogtoy)  { toy = dogtoy; }
        
    // constructor
    Dog(
        std::string dogname,
        int dogweight,
        std::string dogtoy
        ):
        name(dogname), weight(dogweight), toy(dogtoy) {}

};

int main(){
    // make an instance of dog
    Dog quinn("Quinn", 123, "sock");
    
    std::cout << quinn.getName() << std::endl;
    std::cout << quinn.getWeight() << std::endl;
    std::cout << quinn.getToy() << std::endl;
    std::cout << "****" << std::endl;

    quinn.setName("Quinn1");
    quinn.setWeight(12345);
    quinn.setToy("Squaky Squirrel");
    
    std::cout << quinn.getName() << std::endl;
    std::cout << quinn.getWeight() << std::endl;
    std::cout << quinn.getToy() << std::endl;
    
    return 0;
}