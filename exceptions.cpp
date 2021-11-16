#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::cin;

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
