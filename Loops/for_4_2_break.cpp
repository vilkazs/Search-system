#include <iostream>
using namespace std;

int main() {
    string query;
    string word = "";
    
    getline(cin, query);
    
    if (query.size() != 0) {
        int k = 0;
        for (int i = 0; i <= query.size(); ++i) {
            int n;
            if (query[i] == ' ' || i == query.size() ) {

                k = k+1;
                n = stoi(word);
                //cout << k << ", "s << n << ", "s << word << endl;
                
                if ( k <= 10) {
                    if ( n == 0) {
                        cout << "Have not :(" << endl;
                        break;
                    }

                    if ( n == 1) {
                        cout << "Om-nom-nom!" << endl;
                    }
                } else break;
                word = ""s;
            
            } else if (query[i] != ' ') {
                word += query[i];
            }
        }
    }    

}