#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    // множество
    set<string> words;
    // заполняем его строками и выводим размер
    string word;
    while (cin >> word) {
        if (word == "end"s) {
            break;
        }
        words.insert(word);
    }
    cout << words.size() << endl;
    return 0;
}