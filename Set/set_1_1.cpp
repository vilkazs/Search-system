#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    // считываем число строк
    int N;
    cin >> N;
    // создаём множество
    set<string> words;
    // заполняем его строками и выводим размер
    string word;
    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        words.insert(word);
    }
    cout << words.size() << endl;
    return 0;
}