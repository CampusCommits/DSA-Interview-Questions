# 🧠 Question: Binary Tree Level Order Traversal

## 📘 Problem Statement
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

- **Constraints**: 
    - The number of nodes in the tree is in the `range [0, 2000]`.
    - `-1000 <= Node.val <= 1000`

## 🔍 Example
![ExampleImage](docu.jpg)
```plaintext
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Input: root = []
Output: []
```

## 💡 Solution
[➡️ View C++ Code](./Solution.cpp)
[➡️ View Java Code](./Solution.java)

## 🧾 Explanation

- **Approach**:
We have to traverse the tree level by level. We can use a `queue` to store the nodes at each level.As we know queue is first in and first out so we can use queue.Because we want to print the nodes level by level.We can use a while loop to iterate through the queue until it is empty. In each iteration, we can get the size of the queue, which represents the number of nodes at the current level. Then, we can iterate through the nodes at the current level and add their values to a list. After that, we can add the list to the result list. Finally, we can add the children of the nodes at the current level to the queue.

- **Time Complexity**: `O(n)`  
- **Space Complexity**: `O(n)`

## 🏷️ Tags
`BinaryTrees` `Queue` `BFS` `LevelOrder-Traversal`