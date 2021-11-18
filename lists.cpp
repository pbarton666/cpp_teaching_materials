

// list and forward_list objects are sequences or homogenous elements.   
// Both support insertion and deletion.   Both iterate.  Neither will index
// forward_list objects only iterate forward; list objects iterate both ways.
// Stored in non-contiguous memory.  Part of the Standard Template Library.

// In other words, they only know how to get to the next element.

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <string>

using std::cout;
using std::endl;

void makeList(){
    // make empty list and fill elements one at a time
    std::list<int> aList;
    for (int i=0; i<10; i++)
        aList.push_back(i);

    for (int val : aList)
        cout << val << "   ";
    cout << endl;
}

void initList(){
    // initialize with fill constructor
    // Syntax:   list<element_type>  <name> (<#_elements, <value>)
    std::list<int> aList(3, 667);
    for (int val : aList)
        cout << val << "   ";
    cout << endl;
}

void loadList(){
    // load a list with individual values
    std::list<int> aList = {1, 3, 4, 5, 66, 0};
    for (int val : aList)
        cout << val << "   ";
    cout << endl;
}

void loadListArray(){
    // load a list with individual values

    // an array of integers
    int arr[] = {-2, -1, 0, 1, 2};

    // use integer values
    // Syntax:  std::list<<elem_type>> <name>(<arr_name>, <#_arr_elements)
    std::list<int> aList(arr, arr + sizeof(arr) / sizeof(int));

    for (int val : aList)
        cout << val << "   ";
    cout << endl;
}

template <typename T>
bool contains(std::list<T> & listOfElements, const T & element)
{
    // Find the iterator if element in list
    auto it = std::find(listOfElements.begin(), listOfElements.end(), element);
    return it != listOfElements.end();
}

void testContains(){
    //  Does "quinn" exist?
    std::list<std::string> dogs = {"karma", "46", "sara", "24", "quinn", "80"};
    bool result = contains(dogs, std::string("quinn"));
    cout << "dogs contains 'quinn'?  "  << result;
}

void modifyNextElement(std::string look_for, int add_to){
    // find an element then modify next
    std::list<std::string> dogs = {"karma", "46", "sara", "24", "quinn", "80"};
    std::list<std::string>::iterator p = dogs.begin();

    cout << "\n\n" << "Original contents: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }

    bool go_for_next = false;
    p = dogs.begin();
    while(p != dogs.end()) {
        if (*p == look_for){
            cout << "\n\n" << "found " << look_for << endl;
            go_for_next = true;
            p++;
        }
        if (go_for_next){
            cout << "adding " << add_to << " to existing value of " << *p << endl;
            *p = std::to_string(std::stoi(*p) + add_to);
            break;
        }
        p++;
    }
    
    cout << "\n" << "Contents modified: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }
}


void insertElement(std::string add_name, std::string add_wt, int before_here){
    // Insert a new element
    std::list<std::string> dogs = {"karma", "46", "sara", "24", "quinn", "80"};
    std::list<std::string>::iterator p = dogs.begin();

    cout << "\n\n" << "Original contents: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }

    cout << "\n" << "Before here:  " << before_here << endl;
    p = dogs.begin();
    std::advance(p, before_here);
    dogs.insert(p, add_name);
    dogs.insert(p, add_wt);

    cout << "" << "Contents modified: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }
}


void sortList(){
    // Insert a new element
    std::list<std::string> dogs = {"karma", "46", "sara", "24", "quinn", "80"};
    std::list<std::string> dogs_copy = dogs;
    std::list<std::string>::iterator p = dogs.begin();

    cout << "\n\n" << "Original contents: ";
    p = dogs.begin();
    while(p != dogs.end()) {
        cout << *p << " ";
        p++;
    }

    dogs.sort();
    cout << "" << "\nContents sorted: "; p = dogs.begin(); while(p != dogs.end()) { cout << *p << " ";  p++; }

    dogs_copy.reverse();
    cout << "" << "\nContents reversed: "; p = dogs_copy.begin(); while(p != dogs_copy.end()) { cout << *p << " ";  p++; }
}
int main(){
    makeList();       
    initList(); 
    loadList();
    loadListArray();
    testContains();
    modifyNextElement("sara", 100 );
    insertElement("new_dog", "200", 2);
    sortList();
}
