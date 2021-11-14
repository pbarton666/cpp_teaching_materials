#include <iostream>
#include <string>

// Inheritance 

class MammalClass{
    // class attributes are private by default. 'mangled' versions are used here
    protected:
        bool warm_blooded_ = true;  // arctic ground squirrle is heterothermic
    bool live_young_ = true;    // platypus lays eggs

    public:
        // we may want to reserve exceptions for these traits; return mangled values
        bool warm_blooded() const {return warm_blooded_;}
        bool live_young() const {return live_young_;}
        // this variable is defined as a constant and can't be changed
        const bool have_hair = true;
};

class DogClass: public MammalClass{
    public:
        const int leg_count = 4;   // all dogs will have 4 legs
        int loyalty_score_ = 10;   // assumed loyalty is 10, but could change 
        std::string dog_name_;     // dogs will get names, but we don't know what they are yet

        void setName(std::string name){ dog_name_ = name; }
        std::string dog_name() const {return dog_name_;}
        void setLoyaltyScore(int loyalty){ loyalty_score_ = loyalty; }
        int loyalty_score() const {return loyalty_score_;}
    };

class HuskyClass: public DogClass{
    public:
        bool sings_blues = true;
};

int main(){

    // public constructors are available
    HuskyClass my_husky;
    my_husky.setName("Quinn");

    std::cout << std::boolalpha;   //print 'true' and 'false'

    std::cout << my_husky.dog_name() << std::endl;
    std::cout << "warm blooded?  " << my_husky.warm_blooded() << std::endl;
    std::cout << "live young?  " << my_husky.live_young() << std::endl ;
    std::cout << "has hair?  " <<  my_husky.have_hair << std::endl;
    std::cout << "sings blues?  " << my_husky.sings_blues << std::endl;
    std::cout << "leg count?  " << my_husky.leg_count << std::endl ;
    std::cout << "loyalty score?  " << my_husky.loyalty_score() << std::endl ;


    return 0;
}