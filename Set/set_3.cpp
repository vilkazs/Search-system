#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

vector<string> SplitIntoWords(string text) {
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

set<string> VectorToSet(vector<string> vector_query) {
    set<string> s(vector_query.begin(), vector_query.end());
    return s;
}

int main() {
    // Строка со стоп-словами
    string stop_query;
    getline(cin, stop_query);
    
    set<string> set_stop_query = VectorToSet( SplitIntoWords(stop_query) );

    // Строка-запрос
    string query;
    getline(cin, query);
    
    // Вывод слов, которых нет среди стоп-слов
    for (string word : SplitIntoWords(query)) {
        if (!set_stop_query.count(word)) {
            cout << '[' << word << ']' << endl;
        }
    }
}