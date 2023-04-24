#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string surname;
    string full_name;
    
    //cout << "Input your name and surname:"s << endl;
    cin >> name >> surname;
    
    full_name += surname;
    full_name += ", ";
    full_name += name;
    
    cout << full_name << endl;
    //cout << full_name + ", " +  name << endl;
    return 0;
}