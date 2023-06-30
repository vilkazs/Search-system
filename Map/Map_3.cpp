#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string FindWidespreadBird(const vector<string>& types) {
    
    map <string, int> m;
    int current_max = 0;
    string widespread_bird;
    
    for (const auto& type : types) {
        ++m[type];
        
        // Выбор ключа (птицы) с наибольшим значением (количеством)
        if (m[type] > current_max) {
            current_max = m[type];
            widespread_bird = type;
        }
        // Если несколько птиц встретились равное количество раз, функция возвратит первую по алфавиту
        else if (m[type] == current_max && type < widespread_bird) {
            widespread_bird = type;
        }
    }

    return widespread_bird;
}

int main() {
    vector<string> bird_types1 = {"zyablik"s, "sinica"s, "vorobey"s, "zyablik"s, "sinica"s, "sinica"s};
    if (FindWidespreadBird(bird_types1) == "sinica"s) {
        cout << "Correct"s << endl;
    } else {
        cout << "Not correct"s << endl;
    }

    vector<string> bird_types2 = {"ruh"s, "sirin"s, "blue bird of fortune"s, "finist"s, "fenix"s};
    if (FindWidespreadBird(bird_types2) == "blue bird of fortune"s ) {
        cout << "Correct"s << endl;
    } else {
        cout << "Not correct"s << endl;
    }
}