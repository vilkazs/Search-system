#include <iostream>

using namespace std;

int main() {
    double n1, n2;
    cin >> n1 >> n2;
    
    if (n1 == n2) {
        cout << "The orange is divided into two equal parts"s << endl;
    } else if (n1 > n2) {
        cout << "Cut off "s << n1-n2 << " from the first part"s << endl;
    } else
        cout << "Cut off "s << n2-n1 << " from the second part"s << endl;
}