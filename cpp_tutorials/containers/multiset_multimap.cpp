#include <bits/stdc++.h>
using namespace std;
// multiset and multimap allows duplicated elements

template <typename T>
void print_set(const multiset<T> &s) {
    for (const auto &elem : s) {
        cout << elem << " ";
    }
    cout << endl;
}

template <typename K, typename V>
void print_map(const multimap<K, V> &m) {
    for (const auto &kv : m) {
        cout << kv.first << " " << kv.second << endl;
    }
}

int main() {
    multiset <string> s; 
    s.insert("a");
    s.insert("b");
    s.insert("a");
    s.insert("c");
    s.insert("d");
    s.insert("c");
    print_set(s);

    multimap<int, string> m;
    m.insert(make_pair(1, "hello"));
    m.insert(make_pair(1, "hi"));
    m.insert(make_pair(1, "ahihi"));
    m.insert(make_pair(2, "bye"));
    m.insert(make_pair(2, "baba"));
    print_map(m);
    cout << m.find(1)->second << endl; // returns any corresponding value depending on library
    // could be hello, hi, or ahihi

    auto range = m.equal_range(1);
    for (auto itr = range.first; itr != range.second; itr++) {
        cout << itr -> first << " : " << itr -> second << " " << endl;
    }

    auto i = m.find(2);
    m.erase(i); // same way to erase element
    print_map(m);

    return 0;
}