#include <iostream>
#include <map>
using namespace std;

int main() {
    
    map<string, string> names;

    names["John"] = "Doe";
    names["Jane"] = "Doe";
    names["John"] = "Smith";

    cout << names["John"] << endl;

}