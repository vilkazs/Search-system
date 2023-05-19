#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

set<string> VectorToSet(vector<string> vector) {
    
    set<string> set_string;
    
    /*for (string word : vector) {
        set_string.insert(word);
    }*/
	set<string> set_string(vector.begin(), vector.end());
    
	return set_string;
}

int CalculateSimilarity(vector<string> first, vector<string> second) {

    set<string> s_first = VectorToSet(first);
    set<string> s_second = VectorToSet(second);
    set<string> common;
    
    // узнать размер пересечения входных множеств
    for (string word : s_first) {
        if (s_second.count(word)) {
            common.insert(word);
        }
    }
    return common.size();
}

// SplitIntoWords разбивает строку text на слова и возвращает их в виде вектора
// Слово - последовательность непробельных символов
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

int main() {
    string query, description;

    getline(cin, query);
    getline(cin, description);

    cout << CalculateSimilarity(SplitIntoWords(query), SplitIntoWords(description)) << endl;
}