#include <iostream>
#include <string>

using namespace std;

void IsPalindrome(string s) {
    
    string word;
    
    for(int i = s.size()-1; i >= 0; i--) {
        word = word + s[i];
    }

    if (s == word)  {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    } 
    
}

int main() {
    IsPalindrome(""s);
    IsPalindrome("h"s);
    IsPalindrome("tree"s);
    IsPalindrome("mom"s);
}