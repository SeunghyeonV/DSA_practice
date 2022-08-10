#include <bits/stdc++.h>
using namespace std;
// has a tree structure inside, so searching/inserting/deleting time O(logN)
// also do not insert the duplicated element, ignore input automatically
// return the element in sorted order

template <typename T>
void print_set(set<T> &s) {
    cout << "[ ";
    for (typename set<T>:: iterator itr = s.begin(); itr != s.end(); itr++) {
        cout << *itr << " ";
    }
    cout << "]" << endl;
}

int main() {
    set <int> s;
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(40);
    s.insert(30);

    cout << "Sorted automatically. " << endl;
    print_set(s);

    cout << "Is 20 element of s? " << endl;
    auto itr = s.find(20);
    if (itr != s.end()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    cout << "Is 25 element of s? " << endl;
    itr = s.find(25);
    if (itr != s.end()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

 }