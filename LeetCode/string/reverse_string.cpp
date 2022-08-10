#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    string s = "abcde";
    int start = 0;
    int end = s.size()-1;

    while(start <= end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << s << endl;
}