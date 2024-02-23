# include <iostream>
# include <climits>
# include <vector>
# include <algorithm>
# include <set>

using namespace std;

int main () {

    short int size, number, control = 1;
    cin >> size;
    
    set <short int> numbers;

    for (short int i = 0; i < size; i++) {
        cin >> number;
        numbers.insert(number);
    }

    if (numbers.size() < 2) cout << "NO";
    else {
        auto second = numbers.begin();
        cout << typeid(second).name() << endl;
        second++;
        cout << *second;
    }

    return 0;

}