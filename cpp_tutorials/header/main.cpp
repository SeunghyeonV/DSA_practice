#include "arithmetic.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    arith a;
    // match the template values if you specify variable type
    /*
    For example, header file include this template form:
    template <class T1, class T2>
    T1 sub(T1 a, T2 b) {
        return a - b;
    }
    if you want to subtract int variable from double variable,you need to match class T1 and T1 sub
    if declared as T2 sub, then it will return integer value 1 instead of 1.1 in line 21.
    */

    cout << a.add(1,2) << endl;
    cout << a.add(1, 2.5) << endl;
    cout << a.sub(4, 1) << endl;
    cout << a.sub(3.1, 2) << endl;
    // Works exactly the same
    cout << a.add<int, int>(1,2) << endl;
    cout << a.add<int, double>(1, 2.5) << endl;
    cout << a.sub<int, int>(4, 1) << endl;
    cout << a.sub<double, int>(3.1, 2) << endl;

    // string cannot be added without <string, string> declaration
    // cout << a.add("Hello ", "World!") << endl; // compile error
    cout << a.add<string, string>("Hello ", "World!") << endl;
    
    return 0;
}