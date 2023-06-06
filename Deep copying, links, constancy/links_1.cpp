#include <iostream>
 
using namespace std;

void UpdateIfGreater(int limit, int& value) {
	if (limit > value) {
        value = limit;
    }
}

/*
Текущее максимальное расстояние лежит в целочисленной переменной max_distance. Каждое новое свидетельство — это целое число с расстоянием. И оно может увеличить max_distance.

Написать функцию UpdateIfGreater, принимающую два целочисленных аргумента: limit и value. Если limit окажется больше value, пусть функция запишет в value значение параметра limit. Нужно, чтобы изменение параметра value было видно на вызывающей стороне. Возвращать и выводить функция ничего не должна. 

Передать limit по значению (тип int), а value — по ссылке (тип int&). Внутри функции записать в value новое значение, если limit больше value.

---Example---
int max_distance = 26;
UpdateIfGreater(25, max_distance);
cout << max_distance << endl;  // выведет 26, так как 25 не больше 26
UpdateIfGreater(40, max_distance);
cout << max_distance << endl;  // выведет 40, так как 40 больше 26 
*/