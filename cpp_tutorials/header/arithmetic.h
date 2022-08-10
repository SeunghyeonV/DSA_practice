#include <bits/stdc++.h>

class arith {
    public:
    template <class T1>
    T1 add(T1 a, T1 b) {
        return a + b;
    }

    template <class T1, class T2>
    T2 add(T1 a, T2 b) {
        return a + b;
    }

    template <class T2>
    T2 sub(T2 a, T2 b) {
        return a - b;
    }

    template <class T1, class T2>
    T1 sub(T1 a, T2 b) {
        return a - b;
    }

    template <class T3>
    T3 mul(T3 a, T3 b) {
        return a * b;
    }
};