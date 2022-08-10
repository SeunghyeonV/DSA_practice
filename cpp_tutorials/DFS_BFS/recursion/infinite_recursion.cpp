#include <iostream>
using namespace std;

void infiniteRecursion() {
    cout << "This is endless recursion" << endl;
    infiniteRecursion();
}

int main() {
    infiniteRecursion();
    return 0;
}