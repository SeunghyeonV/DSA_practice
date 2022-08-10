#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector <int> arr[], int u, int v) {
    arr[u].push_back(v);
    arr[v].push_back(u);
}

void printGraph(vector <int> arr[], int vertex) {
    for (int i = 0; i < vertex; i++) {
        cout << "\n Adjacency list of vertex " << i << "\n head ";

        for (auto &elem: arr[i]) {
            cout << "-> " << elem;
        }
        cout << endl;
    }
}

int main() {
    int vertex = 5;
    vector <int> arr[vertex];
    addEdge(arr, 0, 1);
    addEdge(arr, 0, 4);
    addEdge(arr, 1, 2);
    addEdge(arr, 1, 3);
    addEdge(arr, 1, 4);
    addEdge(arr, 2, 3);
    addEdge(arr, 3, 4);
    printGraph(arr, vertex);
    return 0;
}