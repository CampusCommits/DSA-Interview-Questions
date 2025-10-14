# 🧠 Question: Dijkstra algorithm

## 📘 Problem Statement
Find shortest path between any two nodes in weighed graph.

- **Input**: 
  - A weighted graph represented as an adjacency list or matrix.
  - Two nodes (start and end) for which the shortest path is to be found.
- **Output**: 
  - The shortest path distance between the two nodes.
  - The actual path taken (if required).
- **Constraints**: 
  - The graph may contain positive weights.
  - The graph may be directed or undirected.
  - The graph may contain cycles.

## 🔍 Example
```plaintext
Input:  graph = [[0, 1, 4], [1, 2, 2], [0, 2, 5]], start = 0, end = 2
Output: 3
```

## 💡 Solution
[➡️ View C++ Code](./Solution.cpp)

## 🧾 Explanation

- **Approach**: We can use Dijkstra's algorithm to find the shortest path in a weighted graph. The algorithm maintains a priority queue to explore the graph, always expanding the least costly node. We update the costs to reach each node and keep track of the paths taken.
- **Time Complexity**: `O((V + E) log V)` where V is the number of vertices and E is the number of edges.
- **Space Complexity**: `O(V)` for storing the distance and priority queue.

## 🏷️ Tags
`Arrays` `Graphs` `Dijkstra's Algorithm` `Priority Queue`