#include <iostream>
#include <string>

using namespace std;

int main() {
    int int1, int2;
    // Считать два целых числа
    cin >> int1 >> int2;
    // Вывести произведение их суммы на количество чисел в записи суммы
    int sum = int1 + int2;
    string length = to_string(sum);
    cout << sum * length.size();
}