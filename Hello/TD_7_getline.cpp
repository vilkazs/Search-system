#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string surname;
    string full_name;
    
    //cout << "Input your name and surname:"s << endl;
	getline(cin, name);
	getline(cin, surname);
    
    full_name += surname;
    full_name += ", ";
    full_name += name;
    
    cout << full_name << endl;
    return 0;
}