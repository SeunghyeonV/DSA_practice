#include <bits/stdc++.h>
using namespace std;

template <typename T>
void q_print(queue<T> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

template <typename T>
void pq_print(priority_queue<T> q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

template <typename T>
void pq_print2(priority_queue< T, vector <T>, greater<T> > q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(5);
    q.push(1);
    q.push(3);

    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(3);
    
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(1);
    pq2.push(3);
    
    q_print(q); // return 5 1 3
    pq_print(pq); // return 5 3 1 - descending order (default)
    pq_print2(pq2); // return 1 3 5 - ascending order 
}