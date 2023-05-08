#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string query;
    getline(cin, query);

    string word;

    // range-based for
    for (char c : query) {
        if (c == ' ') {
            // добавить слово в конец вектора слов
            words.push_back(word);
            // присвоить переменной пустую строку (новое слово)
            word = ""s;
        } else {
            // добавить символ к строке
            word += c;
        }
    }
    // добавить в вектор последнее слово
    words.push_back(word);

   // пройти по всем словам из вектора слов
   for (string word : words) {
    cout << '[' << word << ']' << endl;
    } 
}