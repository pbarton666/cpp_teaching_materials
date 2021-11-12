#include <iostream>
#include <string>

int main()
{
// Comparisons use infix notation
/*   ==  !=   >=   <=   !true */
    int x ( 3 );

// Code block for passing test can be a single line
if (x == 7) 
    std::cout << "We match!  Yay.";

// Braces are recommended, even for single lines
 if (x != 7) {
    std::cout << "We don't match!" << std::endl;
    std::cout << "bummer, man!"  << std::endl;
}  
    
// The else clause is optional
if (x == 7){
    std::cout << "We still match!" << std::endl;
    
}
else {
    std::cout << "We still did not match."  << std::endl;
}

// We can nest to an arbitrary level; but it's horrible (no elif)
if (x == 7){
    std::cout << "We still match! \n"  << std::endl;
}
else {
    if (x == 5){
        std::cout << "We matched at 5"  << std::endl;
    }
    else {
        if (x == 3) {
            std::cout << "We matched at 3."  << std::endl;
        }
        else {
            std::cout << "We still did not match."  << std::endl;
        }
    }
}


// Switch.   NB no 'case level' code blocks.   Need break.
//   No need to nest.  BUT switch condition only works with int and char constants
int a { 1 };
switch (a) {
    case 1:
        std::cout << "Case matched at 1."  << std::endl;
        break;
    case 2:
        std::cout << "Case matched at 2."  << std::endl;
        break;
    default:
        std::cout << "Case did not match."  << std::endl;
        break;
}

// Switch also works on an enum type
enum Animal {Cat, Dog, Wolf};
Animal critter { Cat };

switch (critter) {
    case Cat:
        std::cout << "Cat says 'derp'"  << std::endl;
        break;
     case Dog:
        std::cout << "Dog says 'WOOF!'"  << std::endl;
        break;
     case Wolf:
        std::cout << "Wolf says Awwwwwoooo'"  << std::endl;
        break;

   default:
        std::cout << "Sorry, we don't know your critter."  << std::endl;
        break;
}

// Conditional expressions are used for 'one-liners' so squeeze an if..then
//    statement into one line of code.     NB:  These are not statements and do
//   not end with a ;

// Syntax:    (<condition>)  ?    <expression if true>  :   <expression if false>

int xx{ 2 };
int yy { 3 };
int zz = ( xx > yy ) ? xx : yy;


std::cout << "zz from conditional expression: " + std::to_string(zz)  << std::endl;
 //this is equivalent to:
 int u { 2 };
 int v { 3 };
 int t;
 if (u > v)
     t = u;
 else
     t = v;

std::cout << "t from conditional expression: " + std::to_string(t)  << std::endl;

// The idea is that these can be embedded anywhere
// ( xx > yy ) ? xx : yy

std::cout << "The biggest number is " + std::to_string(  (xx > yy ) ? xx : yy   )

}