#include <iostream>

using namespace std;

int main() {
    int x = 1;
    int y = 2;
    // Результат типа int и равен 0.
    cout << x / y << endl;

    // приведение типа к double. Результат типа double и 0.5.
    cout << x / (y + 0.0) << endl;
}