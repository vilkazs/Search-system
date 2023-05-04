#include <iostream>
#include <string>

int main() {
    int result;
    for (int i = 0; i < 10; ++i) {
        cin >> result;
        if (result == 0) {
            cout << "Have not!" << endl;
            break;
        }
        cout << "Om-nom-nom!" << endl;
    }
}