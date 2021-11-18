#include <iostream>
#include <unordered_map>
#include <string>
 
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::wcout;


int main() {
    // We declare our unordered map (int, string)
    // Here, the key is an int, and the value is a string
    std::unordered_map<string, string> my_map;
 
    // Syntax:  map [ <key_name> ] = <value>;
    my_map["one"] = "uno";
    my_map["two"] = "dos";
 
    // Report all elements  (cf iterations.cpp)
    cout << "Reporting elements:" << endl;
    for (const auto& it: my_map) {
        cout << it.first << ": " << it.second << endl;
    }

    // Returning values from map
    cout << "Returning values" << endl;
    cout << my_map["one"] << endl;

    // Use find()
    cout << "Using find():" << endl;
    auto it1 = my_map.find("two");


    auto it2 = my_map.find("two");
    if (it2 != my_map.end())
        cout << it2->first << " : " << it2->second << endl << endl;
    else  cout << "key not found."  << endl;
 
    auto it3 = my_map.find("xxxxx");
    if (it3 != my_map.end())
        cout << it3->first << " : " << it3->second << endl << endl;
    else  cout << "key not found."  << endl;
 
    // remove an element
    my_map.erase("one");
    
    cout << "Reporting elements:" << endl;
    for (const auto& it4: my_map) {
        cout << it4.first << ": " << it4.second << endl;
    }

    // // Make a nested version
    // std::unordered_map<string, string> spanish;
    // std::unordered_map<string, string> japanese;
    // spanish["one"] = "uno";
    // spanish["two"] = "dos";
    // spanish["three"] = "tres";
    // spanish["four"] = "quatro";
    // japanese["one"] = "ichi";
    // japanese["two"] = "ni";    
    // japanese["three"] = "san";    
    // japanese["four"] ="shi";    // 四


    // std::unordered_map<string, std::unordered_map<string, string>> lang;
    // lang["spanish"] = spanish;
    // lang["japanese"] = japanese;

    // // extract a single element
    // string lang_choice, word_choice;
    // cout << "Which language? " << endl;
    // cin >> lang_choice;
    // cout << "Look up word? "  << endl;
    // cin >> word_choice;

    // cout << "The " << lang_choice << " word for " << word_choice << " is: ";
    // cout << lang[lang_choice][word_choice] << endl;
    
    // // Print out all the elements
    // // auto type automatically defines itself as a return type of lang.begin ()
    // for(auto itr1 = lang.begin(); itr1 != lang.end(); itr1++)       
    // {
    //     cout << itr1->first << ": "; 
    //     // itr1->second represents map<string, vector<string>> stored in lang.
    //     for(auto itr2 = itr1->second.begin (); itr2 != itr1->second.end (); itr2++)
    //         {
    //         cout << itr2->first <<" ";
    //         }
    //     cout << endl;
    // }


    return 0;
}