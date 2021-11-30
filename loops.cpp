#include <iostream>
#include <string>

int main()
{
    // For loop  ()

    // for ( <loop index init ; index check; update index) {
    //     <do stuff>
    // }
    std::cout << "For loop output"  << std::endl;
    for ( int i = 0; i < 10; ++i ) {
        std::cout << i+1 << std::endl;  // reports but does not change i
    }
    std::cout << std::endl;

    // For loop with break (allows tautologically true condition)

    std::cout << "For loop with break output"  << std::endl;
    for ( int i = 0; i < 10; ++i ) {
        std::cout << i+1 << std::endl;  // reports but does not change i
        break;
    }

    std::cout << "For loop with continue"  << std::endl;
    for ( int i = 0; i < 10; ++i ) {
        std::cout << "about to hit continue\t";
        continue;
        std::cout << i+1 << std::endl;  // reports but does not change i
        break;
    }
    std::cout << std::endl;



    // Nested loops.   NB looping vars can be sensible.  

    int cols {4};
    int rows {3};

    std::cout << "Array with element indices as values: \n";
    for (int col = 0; col <= cols; col++ ) {
        for (int row = 0; row <= rows; row++) {
             std::cout << std::to_string(col) + std::to_string(row) + "  ";
        }
        std::cout << std::endl;     
    }

    // For v/ while discussion;   known or unknown elements?   Complexity of update logic?
    // Clarity for you and readers?

// While loop

    /* Syntax (NB: single line of 'stuff' does not require {}):
        while ( <condition is true> ) {
            <do this stuff>
        }
    */
   int a {-2};
   while (a){     //eval at top
       std::cout << "'while' sentinal value is now: " + std::to_string(a) << std::endl;
       a += 1;
   }
    std::cout << std::endl;


   // Do While loop

    /* Snytax:
            do {
                <do this stuff>
            }   while ( <condition is true> )
    */
    int b{-2};
    do {
        b++;
      std::cout << "'do while' sentinal value is now: " + std::to_string(b) << std::endl;
    }  while (b);   //eval at bottom - goes at least once
    
    std::cout << std::endl;
    
    // While with break

    int c {-2};
    while (c){     //eval at top
        a += 1;
        std::cout << "'while' sentinal value is now: " + std::to_string(c) << std::endl;
        std::cout << "Taking a break ..." + std::to_string(c) << std::endl;
        break;
   }  

    std::cout << std::endl;



    
}