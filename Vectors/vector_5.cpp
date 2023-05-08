#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string query;
    getline(cin, query);

    string word;

    // range-based for посимвольно
    for (char c : query) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = ""s;
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

   for (string word : words) {
    cout << '[' << word << ']' << endl;
    } 
}