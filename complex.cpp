#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;    
using std::complex;


void myTypedef(){
    typedef complex<double> dcomp;
    dcomp c(1.0, 3.0);
}

void myComplex(){
    using namespace std::complex_literals;
    typedef complex<double> dcomp;

    // dcomp comp1(2.3, 3.1);
    // dcomp comp2 = 2.0 + 4.1i;
    dcomp comp3 = 3. + .3i, comp4 = 4. + .4i;


    dcomp comp1(3., 4.);
    dcomp comp2(2., 3.);

    cout<< "Complex number: " << comp1 << endl;
    cout<< "Real: " << comp1.real() << endl;
    cout<< "Imaginary: " << comp1.imag() << endl;

    cout << "\n*****\n";
    cout << "Adding " << comp2 << " and " << comp1 << ":    " << comp2 + comp1 << endl;
    cout << "Subtracting " << comp2 << " and " << comp1 << ":    " << comp2 - comp1 << endl;
    cout << "Multiplying " << comp2 << " and " << comp1 << ":   " << comp2 * comp1 << endl;
    cout << "Dividing " << comp2 << " and " << comp1 << ":   " << comp2 / comp1 << endl;

    // lots more like polar, pow, sqrt, sin, etc.
}
void main(){

    myTypedef();
    myComplex();
}