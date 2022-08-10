#include <bits/stdc++.h>
#include <iostream>
// #include <vector>
#define INF 999999999 // unlimited

using namespace std;

/*
  (0)--7--(1) P
   |
   5
   |
  (2)
*/

// Adjacency matrix using 2d array
int graph1[3][3] = {
    {0, 7, 5},
    {7, 0, INF},
    {5, INF, 0}
};

// Adjacency list using vector
vector<pair<int, int> > graph2[3];

int main() {
    // print graph1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << graph1[i][j] << ' ';
        }
        cout << endl;
    }

    graph2[0].push_back({1, 7});
    graph2[0].push_back({2, 5});
    graph2[1].push_back({0, 7});
    graph2[2].push_back({0, 5});

    // print graph2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < graph2[i].size(); j++) {
            cout << '(' << graph2[i][j].first << ',' << graph2[i][j].second << ')' << ' ';
        }
        cout << endl;
    } 
}