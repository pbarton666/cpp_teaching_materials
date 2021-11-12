#include <iostream>
#include <string>

// recursion

int factorial(int n)
    /* <0 are imaginary numbers (we won't go there)
    0! = 0 (definition)
    1! = 1 
    2! = 2 * 1
    3! = 3 * 2 * 1
    ... 
    */
    {
        if(n == 1 || n == 0)
        {
            // end of recurstion
            std::cout << "end of recursion with n=" + std::to_string(n) << std::endl;
            
            return 1;
        }
        else
        {
            // self-referential call with decremented value
            std::cout << "self-referential call with n=" + std::to_string(n) << std::endl;
            return n*factorial(n-1);
        }
    }

// function overloading (two signatures)
int multiply ( int x, int y )
{
    std::cout << "Integer flavor" << std::endl;
    return (x * y);
}

double multiply ( double x, double y )
{
    std::cout << "Double flavor" << std::endl;
    return (x * y);
}




int main(){
    // int input_val { 4 };
    // std::cout << "********"  << std::endl;
    // std::cout << "Calling factorial with " + std::to_string(input_val) << std::endl;
    // std::cout << "********"  << std::endl;
    // std::cout << "Result: " + std::to_string(factorial(input_val ));

    std::cout << "********"  << std::endl;
    int x = 10;
    int y = 20;
    int result_int;
    result_int = multiply(x, y);
    std::cout << "Integer multiply: " + std::to_string(result_int) << std::endl;


    std::cout << "********"  << std::endl;
    double a = 10.0;
    double b = 20.0;
    double result_double;
    result_double = multiply(a, b);
    std::cout << "Double multiply: " + std::to_string(result_double) << std::endl;



}