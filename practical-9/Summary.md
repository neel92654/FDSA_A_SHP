**Problem Faced:**

**Issues Faced While Solving Problem - 1:**

The main challenge was understanding the difference between DFS and BFS. DFS explores as far as possible before backtracking, while BFS visits connected buildings level by level. A visited array prevents visiting the same building repeatedly.

```cpp
void DFS(int v) {
    visited[v] = 1;
    cout << v << " ";
    for (int i = 0; i < n; i++)
        if (graph[v][i] && !visited[i])
            DFS(i);
}
```

BFS uses a queue to process buildings in first-in, first-out order.

```cpp
q.push(start);
visited[start] = 1;
while (!q.empty()) {
    int v = q.front();
    q.pop();
    cout << v << " ";
}
```
