#include <iostream>
using namespace std;

int main() {
    int bill;
    int sum = 0;

    do {
        cin >> bill;
        // сочетание if и continue позволяет игнорировать ненужный случай
        if (bill <= 0) {
            continue;
        }

        cout << "Income: " << bill << endl;
        sum += bill;

    // признак конца - ноль
    } while (bill != 0);

    cout << "Total income: " << sum << endl;
}