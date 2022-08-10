#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
 
using namespace std;

int main(){
    vector <int> v1;
    vector <int> v2;
    for(int i=1; i<=5; i++){
        v1.push_back(i);
    }

    for(int i=0; i<=4; i++){
    cout << v1[i] << " ";
    }
    cout << endl;
    cout << "Size: " << v1.size() << endl;
    cout << "Max size: " << v1.max_size() << endl;
    cout << "Total capacity: " << v1.capacity() << endl;
    cout << "First element: " << v1.front() << endl;
    cout << "Last element: " << v1.back() << endl;
    cout << "Element at 3rd index: " << v1.at(3) << endl;
    cout << "Is v1 empty? :" << v1.empty() << endl;
    cout << "Is v1 empty? :" << v2.empty() << endl;

    return 0;
}