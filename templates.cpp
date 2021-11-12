#include <iostream>
#include <string>


// Overloaded functions
int multiply ( int x, int y )
{
    return (x * y);
}

double multiply ( double x, double y )
{
    return (x * y);
}


// Generic template
template<class Type>
Type mul ( Type x, Type y )
{
    return (x * y);
}


int main(){
    // Correct multiply() inferred from input types
    int x=3;
    int z=5;
    int ans = multiply(x, z);
    std::cout << ans << std::endl;
    
    std::cout << "******" << std::endl;
    int ans_mul_int = mul<int>(x, z);
    std::cout << ans_mul_int << std::endl;

    // Template data type can be forced
    std::cout << "******" << std::endl;
    float a = 3.1;
    float b = 5.2;
    float ans_mul_float = mul<float>(a, b);
    std::cout << ans_mul_float << std::endl;

   // Template data type can be inferred
    std::cout << "******" << std::endl;
    float c = 3.1;
    float d = 5.2;
    float ans_mul_float = mul(c, d);
    std::cout << ans_mul_float << std::endl;


}