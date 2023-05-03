#include <iostream>

using namespace std;

int main() {
    int x, y, i;
    cin >> x >> y;
    if (x < y) {
        for (i=x; i <=y; ++i) {
            cout << i << endl;
        }
    } else {
        for (i=x; i >=y; --i) {
            cout << i << endl;
        }
    }
}