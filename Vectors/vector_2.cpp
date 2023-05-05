#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> month_lengths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> month_name = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int month_index;
    cin >> month_index;

    if (month_index < 1 ||  month_index > month_lengths.size() ) {
        cout << "Incorrect month"s << endl;
    } else {
        cout << "There are "s << month_lengths[month_index-1] << " days in "s << month_name[month_index-1] << endl;
    }
}