#include <iostream>
#include <string>
#include <vector>

using namespace std;

// строка s палиндромом
bool IsPalindrome(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

vector<string> PalindromeFilter(vector<string> words, int min_length) {
    // Возвращает из words все строки-палиндромы длиной не меньше min_length
    vector<string> mes;
    for (string word : words) {
        if (word.size() >= min_length && IsPalindrome(word)) {
            mes.push_back(word);
            cout << word << endl;
        }
    }
    return mes; 
}

int main() {
    vector<string> words;
    string query;
    getline(cin, query);

    string word; 
    while (cin >> word) {
        if (word == "end"s) {
            break;
        }
        words.push_back(word);
    }
    
    int min_length;
    cin >> min_length;
    
    PalindromeFilter(words, min_length);
}