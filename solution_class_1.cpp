#include <iostream>
#include <string>
#include <exception>
#include <vector>

using namespace std;

template<class Type>
Type report ( Type x )
{
    cout << endl;
    for (int i=0; i<x.size(); i++ ){
        cout << x[i] << "\t";
    }   
    cout << endl;
    return (x); 
}

class RelHumid{
    private:
        string rh_;   
        vector<int> vstore;

    public:
        // constructor (no function type)
        RelHumid(){
        }

        void setRh(string rh){
            // is this castable to a number
            int rh_int;
            try{
                float result;
                rh_int = stoi(rh);
                result = rh_int*1.1;
             }
            catch(exception& ex){
                cout << "Dude! " << rh << " isn't a number." << endl;
            }
            if (rh_int > 0 && rh_int <= 100) {
                rh_ = rh_int;
                vstore.push_back(stoi(rh));
            }
        }
        void addRh(string rh){
            setRh(rh);
            cout <<  "\nRH vector is now:  ";
            report(vstore);
        }
};

int main(){
    RelHumid myrh;
    myrh.addRh("98");
    myrh.addRh("3");
    myrh.addRh("13");
    myrh.addRh("23");
    myrh.addRh("-3");
    myrh.addRh("junk");

    return 0;

} 
