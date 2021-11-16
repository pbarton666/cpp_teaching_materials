#include <iostream>
#include <unordered_map>
#include <string>
 
using std::string;
using std::cout;
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
    for (const auto& it: my_map) {
        cout << it.first << ": " << it.second << endl;
    }

    // Grab a value
    cout << my_map["one"] << endl;

    // Make a nested version
    std::unordered_map<string, string> spanish;
    std::unordered_map<string, string> japanese;
    spanish["one"] = "uno";
    spanish["two"] = "dos";
    spanish["three"] = "tres";
    spanish["four"] = "quatro";
    japanese["one"] = "ichi";
    japanese["two"] = "ni";    
    japanese["three"] = "san";    
    japanese["four"] ="shi";    // 四


    std::unordered_map<string, std::unordered_map<string, string>> lang;
    lang["spanish"] = spanish;
    lang["japanese"] = japanese;


    cout << lang["japanese"]["four"] << endl;
    
    return 0;
}