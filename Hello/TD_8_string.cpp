#include <iostream>
#include <string>

using namespace std;

int main() {
    string name_1;
    string name_2;
    string name_3;
    
    getline(cin, name_1);
    getline(cin, name_2);
    getline(cin, name_3);
    
    // считать три названия целиком. Выводить в обратном порядке
    
    cout << name_3 << endl
         << name_2 << endl
         << name_1 << endl;
}