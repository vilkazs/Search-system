#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

using namespace std;

string ReadLine() {
    string s;
    getline(cin, s);
    return s;
}

int ReadLineWithNumber() {
    int result = 0;
    cin >> result;
    ReadLine();
    return result;
}

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

// разбирает текст запроса на слова, исключая из них стоп-слова
set<string> ParseStopWords(const string& text) {
    set<string> stop_words;
    for (const string& word : SplitIntoWords(text)) {
        stop_words.insert(word);
    }
    return stop_words;
}

vector<string> SplitIntoWordsNoStop(const string& text, const set<string>& stop_words) {
    vector<string> words;
    // по всем словам из текста проверяем, что их нет в списке стоп-слов
    for (const string& word : SplitIntoWords(text)) {
        if (stop_words.count(word) == 0) {
            words.push_back(word);
        }
    }
    // результат без стоп-слов
    return words;
}

void AddDocument(vector<vector<string>>& documents, const set<string>& stop_words,
                 const string& document) {
    const vector<string> words = SplitIntoWordsNoStop(document, stop_words);
    documents.push_back(words);
}

set<string> VectorToSet(vector<string> vector) {
    
	set<string> set_string(vector.begin(), vector.end());
	return set_string;
}

// Разбирает text на слова и возвращает только те из них, которые не входят в stop_words
set<string> ParseQuery(const string& text, const set<string>& stop_words) {
    set<string> query_words;
    
    query_words = VectorToSet( SplitIntoWordsNoStop(text, stop_words) );
    
    // извлечь из текста запроса слова
    for (const string& word : query_words) {
        query_words.insert(word);
    }
    
    return query_words;
}


// Возвращает true, если среди слов документа встречаются слова поискового запроса query_words
// => проверяет, подходит ли документ под критерии поискового запроса
/*
true, если хотя бы одно из слов документа входит во множество слов поискового запроса.
Если ни одно слово не входит - false
*/
bool MatchDocument(const vector<string>& document_words, const set<string>& query_words) {
    
    set<string> set_document_words = VectorToSet(document_words);
    
    //for (const string& word : document_words) {
    for (const string& word : set_document_words) {
        if (query_words.count(word) != 0) {
            return true;
            break;
        }
    }
    return false;
}

// Возвращает массив id документов, подходящих под запрос query
// Стоп-слова исключаются из поиска
vector<int> FindDocuments(const vector<vector<string>>& documents, const set<string>& stop_words,
                          const string& query) {
    vector<int> matched_documents;
    
    // Использовать вспомогательные функции ParseQuery, MatchDocument
    // В качестве id документа использовать его индекс в массиве documents
    
    // Разбор поискового запроса
    set<string> query_without_stop_words = ParseQuery(query, stop_words);
    
    // Перебор всех документов и сбор id, которые подходят под критерии поискового запроса
    int document_id = 0;
    //for (const auto& document : documents) {
    for (const vector<string>& document : documents) {
        // Проверка документа на соответствие запросу, используя MatchDocument
        if (MatchDocument(document, query_without_stop_words) /*== true*/) {
            matched_documents.push_back(document_id);
        }
    ++document_id;
    }
    
    return matched_documents;
}

// считывает стоп-слова, документы и поисковый запрос.
// Выводит результаты поиска: id документов, соответствующих поисковому запросу
int main() {
    // Read stop_words
    const string stop_words_joined = ReadLine();
    const set<string> stop_words = ParseStopWords(stop_words_joined);

    // Read documents
    vector<vector<string>> documents;
    const int document_count = ReadLineWithNumber();
    for (int document_id = 0; document_id < document_count; ++document_id) {
        AddDocument(documents, stop_words, ReadLine());
    }
    
    // Find documents by query
    const string query = ReadLine();
    for (const int document_id : FindDocuments(documents, stop_words, query)) {
        cout << "{ document_id = "s << document_id << " }"s << endl;
    }
}

/*
Формат ввода и вывода
В первой строке ввода содержатся стоп-слова, разделённые пробелами. Следующая строка ввода содержит целое число N, задающее количество документов. В каждой из последующих N строк — текст документа, в котором слова разделяются одним пробелом. Последняя строка ввода содержит текст поискового запроса, где слова разделяются одним пробелом.
Программа должна вывести id документов, соответствующих поисковому запросу, как это показано ниже. id выводятся в порядке возрастания.

Пример ввода:
a an on the in is has been are with for from have be was
4
a small curly guinea pig with grey hair has been found
a young 50 year old crocodile wants to make friends
a strange brown creature was seen in the box of oranges
a strange animal with big ears is building a house for its friends
cheburashka with big ears likes oranges 

Пример вывода:
{ document_id = 2 }
{ document_id = 3 } 
Под запрос "cheburashka with big ears likes oranges" подходят два документа:
	Документ "a strange brown creature was seen in the box of oranges" с id=2
	Документ "a strange animal with big ears is building a house for its friends" с id=3
Слово "with" — стоп-слово. Оно не участвует в поиске. Поэтому документ "a small curly guinea pig with grey hair has been found" не будет найден.
*/