#include <iostream>
#include <string>

using namespace std;

void IsPalindrome(string s) {
    int mes = 1;
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            mes = 0;
			break;
        }
    }
    cout << mes << endl;
}

int main() {
    IsPalindrome(""s);
    IsPalindrome("h"s);
    IsPalindrome("deep"s);
    IsPalindrome("mom"s);
    
    return 0;
}