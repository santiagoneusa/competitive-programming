# include <iostream>

using namespace std;

int main () {

    int cases, size; cin >> cases;
    string s; 
    
    for (int i = 0; i < cases; i++) {
        cin >> size;
        cin >> s;
        int scarecrow = 0;
        for (int j = 0; j < size; j++) {
            if (s[i] == '.') {
                scarecrow++;
                j += 2;
            }
        }
        cout << scarecrow;
    }

}