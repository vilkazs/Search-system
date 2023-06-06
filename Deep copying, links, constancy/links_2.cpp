#include <vector>
#include <string>

using namespace std;

void MoveStrings(vector<string>& sourse, vector<string>& destination) {
    for (string& word : sourse) {
        destination.push_back(word);
    }
    sourse.clear(); 
}

/*
---TD---
Написать функцию MoveStrings. Она принимает векторы строк source и destination и дописывает все строки из первого вектора в конец второго. После выполнения функции вектор source должен стать пустым.


---clear---
Чтобы очистить содержимое вектора, вызовите у него метод clear:
string query = "how to learn c++"s;
vector<string> query_words = SplitIntoWords(query);
query_words.clear();
// Теперь вектор query_words пуст. Метод empty вернёт true, метод size — 0. 

---
Принять векторы строк source и destination по ссылке. Дописать строки в destination с помощью цикла и метода push_back. Перед выходом из функции очистить source методом clear.
*/