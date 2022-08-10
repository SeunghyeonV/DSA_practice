#include <bits/stdc++.h>
using namespace std;
// map
template <typename K, typename V>
void print_map(map<K, V> &m) {
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << itr -> first << " " << itr -> second << endl;
    }
}

template <typename K, typename V>
void print_map2(map<K, V> &m) {
    for(const auto &kv: m) {
        cout << kv.first << " " << kv.second << endl;
    }
}


int main() {
    map <string, double> pitcher_list;
    // way 1 to insert
    pitcher_list.insert(pair<string, double> ("Park", 3.23));
    pitcher_list.insert(pair<string, double> ("Hacker", 2.93));
    pitcher_list.insert(pair<string, double> ("John", 2.88));
    // way 2 to insert
    pitcher_list.insert(make_pair("Roy", 3.12));
    pitcher_list.insert(make_pair("Shin", 2.67));
    // way 3 to insert
    pitcher_list["Kelly"] = 3.90;

    print_map(pitcher_list);
    // print_map2(pitcher_list); // return the same result
    cout << "Park's score: " << pitcher_list["Park"] << endl;
    // way 1 to erase
    pitcher_list.erase("Park"); 
    // way 2 to erase
    auto new_itr = pitcher_list.find("John");
    pitcher_list.erase(new_itr);

    print_map(pitcher_list);
    // print_map(pitcher_list);


}