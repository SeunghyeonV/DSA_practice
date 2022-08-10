#include <bits/stdc++.h>
using namespace std;

int factorial (int n) {
    if (n == 0 || n == 1) return n;
    return n * factorial(n-1);
}

int power(int n, int m) {
    if (m == 0) return 1;
    int val = power(n, m-1);
    return n * val;
}

void print(int n) {
    if (n == 0) return;
    print(n-1); // ascending order
    cout << n << " ";
    // print(n-1); // descending order
    return;
}


int count(int n){
   /// base
   if(n==0){
    return 0;
   }
   /// recursive
   int smallAns = count(n/10);
    cout << "smallAns: " << smallAns << ' ';
   /// calculation
   return smallAns + 1;

}

int sum(int n) {
    if (n == 0 || n == 1) return n;
    int ans = n + sum(n-1);
    return ans;
}

int sumof_digit(int n) {
    if(n == 0) return 0;
    
    int ans = sumof_digit(n/10);
    int last_digit = n%10;
    return ans + last_digit;
    }

// same as factorial
int multiply (int n) { 
    if (n == 0 || n == 1) return n;
    int ans = multiply(n-1);
    return n * ans;
}

int count_zero(int n) {
    if (n == 0) return 0;

    int ans = count_zero(n/10);
    int last = n % 10;

    if (last == 0) {
        return 1 + ans;
    }
    else return ans;
}

double geometric_sum(int n) {
    if (n == 0) return 1;
    double ans = geometric_sum(n-1);
    return ans + 1.0/pow(2,n);

}

int main() {
    // print(5);
    // cout << count(12345) << endl;
    cout << sum(10) << endl;
    cout << sumof_digit(12345) << endl;
    cout << multiply(5) << endl;    
    cout << count_zero(10302) << endl;
    cout << geometric_sum(3) << endl;

    return 0;
}