#include <iostream>
using namespace std;

void dec_to_bin(int num) {
    int value [100];
    int i = 0;
    while (num > 0) {
        value[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i-1; j >= 0; j--) {
        cout << value[j];
    }
    cout << endl;
}


int main() {
    // int a = 10;
    // cout << oct << a << endl; // return octal value of a
    // cout << hex << a << endl; // return hexadecimal value of a
    dec_to_bin(71);
}
