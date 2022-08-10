#include <bits/stdc++.h>
using namespace std;

// top - down
long long d[100];
long long fib_memoization(int n) {
    if (n == 1 || n == 2) return 1;

    if (d[n] != 0) {
        return d[n];
    }

    d[n] = fib_memoization(n-1) + fib_memoization(n-2);
    return d[n];
}

// bottom - top
long long d2[100];
long long fib_iterative(int n) {
    d2[1] = 1;
    d2[2] = 1;

    for (int i = 3; i < n+1; i++) {
        d2[i] = d2[i-1] + d2[i-2];
    }
    return d2[n];
}


int main() {
    cout << fib_memoization(100) << endl;
    cout << fib_iterative(100) << endl;
}

/*
display how memoization works
long long d[100];

long long fib(int n) {
    cout << 'f' << '(' << n << ')' << ' ';
    if (n == 1 || n == 2) return 1;

    if (d[n] != 0) return d[n];

    d[n] = fib(n-1) + fib(n-2);

    return d[n];
}

int main() {
    fib(6);
    return 0;
}
*/