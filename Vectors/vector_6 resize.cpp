#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int q;
    cin >> q; // кол-во операций

    vector<bool> people; // пустая очередь
  
    for (int i = 0; i < q; ++i) {
        string operation_code;
        cin >> operation_code;
    
        if (operation_code == "WORRY"s) {
            int index;
            cin >> index;

            // Отметить по index как беспокоящегося (true)
            people[index] = true;
            
        } else if (operation_code == "HAPPY"s) {
            int index;
            cin >> index;

            // Отметить по index как спокойного (false)
            people[index] = false;
            
        } else if (operation_code == "COME"s) {
            int count;
            cin >> count;

            // Измените размер на count. Указывайте второй параметр метода
            // resize, чтобы добавлялись только спокойные (false).
            //cout << people.size() << endl;
            people.resize( people.size() + count, false );
            //cout << people.size() << endl;
            
        } else if (operation_code == "LAST_WORRY"s)  {
            // worry, если последний в очереди беспокойный,
            // и happy, если спокойный
            if (people.back() == true) {
                cout << "worry"s << endl;
            } else {
                cout << "happy"s << endl;
            }
        }
    }
}