#include <iostream>
#include <stack>
using namespace std;

void printStack(stack <int> s) {
    if (s.empty()) {
        return;
    }

    int x = s.top();
    s.pop();
    printStack(s);

    cout << x << " ";
    s.push(x);
}

int main() {
    stack <int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.pop();
    s.push(2);
    s.pop();
    // printStack(s);
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}