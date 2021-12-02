#include <iostream>
#include <string>
#include <vector>


using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

// Vectors as an upgrade to arrays.

// Do a lot of shuffling and reallocating.  Not so efficient, but easy.


// Generic template for reporting vectors (not possible with arrays)
//   due to the fact that vectors know their size.
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



void stash(){
    vector<string> employees;

    // one way to get values in:
    employees.push_back("joe");
    employees.push_back("fred");
    employees.push_back("mary");
    employees.push_back("quinn");

    cout << "Employee count: " << employees.size() << endl;

    // Cf. template above for slicker implementation
    for (int i=0; i<employees.size(); i++ ){
        cout << employees[i] << "\t";
    }   cout << endl;

// ================================

// We can do a direct assignment, as with arrays 
    vector<int> numbers = {1, 2, 3};
    report(numbers);

    // As with arrays, we can index
    numbers[2] = 666;
    report(numbers);

    // We can append a new value at any time
    numbers.push_back(88888);
    report(numbers);

    // We can pop a value off the end
    numbers.pop_back();
    report(numbers);

    cout << endl;
    report(employees);
    cout << "capacity:  " << employees.capacity() << endl;
    cout << "size:  " << employees.size() << endl;
    cout << "second element: " << employees.at(1) << endl;
    cout << endl;


// =================================
    // Add multiple elements with constructor.  Syntax:
    // vector<type_of_element> name ( <#_elements_to_write>, <value_to_write>);
    vector<int> ivector (3,100);
    report(ivector);

// ====================================
    // create an iterator object (sort of a pointer)
    vector<int>::iterator it;
    it = ivector.begin();

// ================================
//  Use iterator pointer and insert() to manipulate elements.

    // Syntax:
    // .insert( <position>, <value>)   // inserts before this point i.e., begin()
    it = ivector.insert ( it , 200 );
    report(ivector);

    // Syntax:  (fills multiple values)
    // .insert ( <position>, <#new_elements>, <value>    )   //inserts before this point
    ivector.insert (it, 2, 300);   // it still points at 200, so inserts at begin()
    report(ivector);

    // "it" no longer valid, get a new one:
    it = ivector.begin();

    // New vector. Syntax:  (initializes 2 elements of 500)
    // vector<type_of_element> name ( <#_elements_to_write>, <value_to_write>);
    vector<int> new_vector (2 ,400);
    report(new_vector);

    // Syntax (uses template as constructor):
    // .insert ( <position>, <size>, <value>    )  // insert before begin()+2 ... all of new_vector, 
    ivector.insert (it+2, new_vector.begin(), new_vector.end());
    report(ivector);

    // =======================

    // insert a standard array into a vector
    int myarray [] = { 501,502,503 };
    // Syntax:
    // .insert ( <position>, <size>, <value>    )    // inserts at beginning
    ivector.insert (ivector.begin(), myarray, myarray+3);
    report(ivector);

} 