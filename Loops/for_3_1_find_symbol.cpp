#include <iostream>
#include <string>

using namespace std;

int main() {
    string query;
    getline(cin, query);

    // вывод всех индексов пробелов и конца строки
	
    for (int i = 0; i <= query.size(); ++i) {
        if (query[i] == ' ' || i == query.size() ) {
            cout << i << endl; 
        }
    }
}

/* В тестах есть запуск с пустой строкой, случаи с
разным количеством слов, разделённых пробелами.*/