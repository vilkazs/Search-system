#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> CountCharInString(const string& s) {
    map<char, int> m;
    
    for (const char& simbol : s) {
       ++ m[simbol];
        /*cout << simbol << endl;
        cout << m[simbol] << endl;*/
    }
    
    return m;
}

bool CheckAnagram(const string& s1, const string& s2) {
    
    return CountCharInString(s1) == CountCharInString(s2);
    
	/*
    map<char, int> m1 = CountCharInString(s1);
    map<char, int> m2 = CountCharInString(s2);
    
    if (m1 == m2) {
        return true;
    } else {
        return false;
    }
	*/

}

// проверки
void CheckIsTrue(bool value) {
    if (value) {
        cout << "Test passed :)"s << endl;
    } else {
        cout << "Test failed :("s << endl;
    }
}

int main() {
    CheckIsTrue(CheckAnagram("tea"s, "eat"s));
    CheckIsTrue(CheckAnagram("battle"s, "beatle"s));
    CheckIsTrue(CheckAnagram("lift"s, "elevator"s));
    CheckIsTrue(CheckAnagram("ocean"s, "canoe"s));
}