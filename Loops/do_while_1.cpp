﻿#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 5;
    int b;
    do {  
        cout << "Guess the number: "s << endl;  
        cin >> b;
    } while (a != b);
    cout << "You are winner!"s << endl;
}