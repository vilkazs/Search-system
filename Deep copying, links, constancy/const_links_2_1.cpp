#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> SplitIntoWords(const string& text) {
    vector<string> words;
    string word;
    for (const char c : text) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

string ReadQuery(){
    string query;
    getline(cin, query); 
    return query;
}

int main() {
    vector<string> words;
	words = SplitIntoWords(ReadQuery());
    //words = SplitIntoWords("test search query"s);
    
    for (const string& word : words) {
        cout << "["s << word << "] "s;
    }
}