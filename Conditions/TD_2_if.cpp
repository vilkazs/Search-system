/*
Если исходная стоимость N больше A, устанавливается скидка в X процентов.
Если исходная стоимость N больше B, скидка составит Y процентов.
На вход программе даны пять вещественных чисел: N, A, B, X, Y. 
Число A меньше числа B. 
*/

#include <iostream>

using namespace std;

int main() {
    double n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    
    if (n > b) {
       n = n * (1 - 0.01 * y);
        cout << n << endl;
    } else {
        if (n > a) {
            n *= (1 - 0.01 * x);
            cout << n << endl;
        } else 
            cout << n << endl;
    }
}

/*
// other solution:
    if (n > b) {
        n *= 1.0 - y / 100;
    } else if (n > a) {
        n *= 1.0 - x / 100;
    }
    cout << n << endl;
*/