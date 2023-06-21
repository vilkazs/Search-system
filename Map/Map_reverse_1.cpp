#include <iostream>
#include <map>
#include <string>

using namespace std;

// переворачивает словарь: ключи становятся значениями, значения — ключами
map<string, string> BuildReversedMap(const map<string, string>& input_map) {
    // ассоциативный контейнер
    map<string, string> output_map;
    
    for (const auto& [key, value] : input_map) {
        // запись по ключу value значения key (т.е. разворачиваем пару)
		output_map[value] = key;
        //output_map.insert({value, key});
    }
    
    return output_map;
}

int main() {
    map<string, string> test1_input = {{"cat"s, "felis catus"s}, 
                                       {"dog"s, "canis lupus"s}};
    map<string, string> test1_output = {{"felis catus"s, "cat"s}, 
                                        {"canis lupus"s, "dog"s}};

    // Проверки корректности BuildReversedMap 
    if (BuildReversedMap(test1_input) != test1_output) {
        cout << "BuildReversedMap returned wrong dictionary"s << endl;
    }

    if (BuildReversedMap(test1_input).size() != test1_output.size()) {
        cout << "BuildReversedMap returned wrong dictionary"s << endl;
    }
}