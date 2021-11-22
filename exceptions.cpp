#include <iostream>
#include <string>
#include <exception>

using std::endl;
using std::cout;
using std::cin;


#include <iostream>
#include <exception>
using namespace std;

class Base { virtual void dummy() {} };
class Derived: public Base { int a; };

int main_with_exception () {
  try {
    Base * pba = new Derived;
    Base * pbb = new Base;
    Derived * pd;

    pd = dynamic_cast<Derived*>(pba);
    if (pd==0) cout << "Null pointer on first type-cast.\n";

    pd = dynamic_cast<Derived*>(pbb);
    if (pd==0) cout << "Null pointer on second type-cast.\n";

  } catch (exception& e) {cout << "Exception: " << e.what();}
  return 0;
}

int main(){
    int CORRECT = 20;
    try {
        int guess = 15;
        if (guess == CORRECT) {
            cout << "Yay!";

        // exception handling can happen in an else clause    
        } else {
            throw (guess);  // this calls the catch block (just like any function)
            cout << "This line won't ever execute.";
        }
    }

    catch (int myNum) {  // this anticipates an integer.
    cout << "I'll just give you this one:" << endl;
    cout << "The correct answer is " <<  CORRECT << " You guessed: " << myNum << endl;
    } 
    return 0;
} 
