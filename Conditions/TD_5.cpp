/*
Перед Зои три дома разного цвета. Ей известно, рядом с домом какого цвета видели последний раз питомца. Дома имеют номера: 1, 2 и 3. Определить номер дома, с владельцем которого надо поговорить.

Формат входных и выходных данных
В стандартный поток ввода передаются четыре цвета: цвета трёх домов и цвет дома, рядом с которым видели питомца. Цвета разделяются одним пробелом. Не гарантируется, что все три дома имеют разные цвета.
В стандартный поток вывода надо вывести строку Enter the house N — «Войти в дом N», где N — номер дома: 1, 2 или 3. Если среди домов нет дома нужного цвета, надо вывести строку Seek somewhere else — «Искать в другом месте».

Примеры входных и выходных данных
Ввод	Вывод
red green blue red	Enter the house 1
white blue yellow yellow	Enter the house 3
red green blue black	Seek somewhere else
*/

#include <iostream>

using namespace std;

int main() {
    string colour1, colour2, colour3, colour;
    bool dif1, dif2, dif3, dif;
    
    // Считать цвета трёх домов и цвет дома, где видели Пушистика
    cin >> colour1 >> colour2 >> colour3;
    cin >> colour;
    
    dif1 = (colour1 != colour2);
    dif2 = (colour1 != colour3);
    dif3 = (colour2 != colour3);
    
    dif = dif1 && dif2 && dif3;
    
    // Вывести Enter the house N, если дом нужного цвета имеет номер N
    // Вывести Seek somewhere else, если дома нужного цвета нет   
    if (dif) {
        if (colour == colour1) {
           cout << "Enter the house 1"s << endl;  
        } else if (colour == colour2) {
            cout << "Enter the house 2"s << endl;  
        } else if (colour == colour3) {
            cout << "Enter the house 3"s << endl;  
        } else
            cout << "Seek somewhere else"s << endl;
    } else {
        cout << "Seek somewhere else"s << endl;
    }
    
}