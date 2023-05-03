#include <iostream>
#include <string>

using namespace std;

int main() {
    string query;
    string word = "";
    getline(cin, query);

    if (query.size() != 0) {
        for (int i = 0; i <= query.size(); ++i) {
            if (query[i] == ' ' || i == query.size() ) {
                cout << "["s << word << "]"s << endl;
                word = ""s;
            } else if (query[i] != ' ') {
                word += query[i];
            }
        }
    }
}

/*
1) Между словами один пробел.
2) Строка начинается со слова и заканчивается концом строки.
3) На входе одна строка.
4) Строка может быть пустой.
*/