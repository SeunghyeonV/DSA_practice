#include <iostream>
#include <queue>
using namespace std;

int number = 7;
int visited[7];
vector <int> graph[8]; // enabling the number to start from 1

void bfs(int start) {
    queue <int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int x = q.front();
        cout << x << " ";
        q.pop();

        for (int i = 0; i < graph[x].size(); i++) {
            int y = graph[x][i];
            if (!visited[y]) { // if not visited -> append in queue
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main() {
    graph[1].push_back(2);
    graph[2].push_back(1);

    graph[1].push_back(3);
    graph[3].push_back(1);

    graph[2].push_back(3);
    graph[3].push_back(2);

    graph[2].push_back(4);
    graph[4].push_back(2);

    graph[2].push_back(5);
    graph[5].push_back(2);

    graph[4].push_back(5);
    graph[5].push_back(4);

    graph[3].push_back(6);
    graph[6].push_back(3);

    graph[3].push_back(7);
    graph[7].push_back(3);

    graph[6].push_back(7);
    graph[7].push_back(6);

    bfs(1);
    return 0;
}