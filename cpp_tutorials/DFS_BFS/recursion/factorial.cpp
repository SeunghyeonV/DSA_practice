#include <iostream>
using namespace std;

int factorial_iterative(int n) {
    if (n == 1) return 1;
    int x = 1;
    for (int i = n; i > 1; i--) {
        x = x * i;
    }

    return x;
}

int factorial_recursion (int n) {
    if (n==1) return 1;

    return n * factorial_recursion(n-1);

}
int main() {
    cout << factorial_recursion(5) << endl;
    cout << factorial_iterative(5) << endl;
    return 0;
}