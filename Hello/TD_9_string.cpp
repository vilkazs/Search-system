#include <iostream>
#include <string>

using namespace std;

int main() {

    string name_1;
    string name_2;
    string name_3;
    string name_4;
    string name_5;
    
    getline(cin, name_1);
    getline(cin, name_2);
    getline(cin, name_3);
    getline(cin, name_4);
    getline(cin, name_5);
	//cin >> name_1 >> name_2 >> name_3 >> name_4 >> name_5;
    
    // Cчитать пять слов, вывеcти их первые символы слитно.
    // Первый символ каждого слова имеет индекс равный нулю.
    
    cout << name_1[0]
         << name_2[0]
         << name_3[0]
         << name_4[0]
         << name_5[0] << endl;
}