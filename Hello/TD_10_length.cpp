#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;

    string text = to_string(num) + " animals found"s;
    cout << text << endl;
    return 0;
}