# 🧠 Question: Two Sum

## 📘 Problem Statement
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

- **Input**: two inputs 1) nums: An array of integers 2) Target sum

- **Output**: Indices of the two numbers whose sum is equal to target in the array format.
- **Constraints**:  
    `2 ≤ nums.length ≤ 10⁴`  
    `-10⁹ ≤ nums[i] ≤ 10⁹` 
    `-10⁹ ≤ target ≤ 10⁹`  
    `Only one valid answer exists.`

## 🔍 Example
```plaintext
Input:  nums = [2, 7, 11, 15], target = 9  
Output: [0, 1]
Explanation:
nums[0] + nums[1] = 2 + 7 = 9, so return [0,1].

```


## 💡 Solution
[➡️ View C++ Code](./Solution.cpp)
[➡️ View Java Code](./Solution.java)

## 🧾 Explanation

- **Approach**: We need to find two numbers in the array whose sum is equal to the target. To do this efficiently, we use a map (also called a hash map) to store each number and its index as we go through the array. For each number, we check if the value `target - nums[i]` is already in the map. If it is, we have found the two numbers, and we return their indices. This way, we only need to go through the array once.

- **Time Complexity**: `O(n)`  
- **Space Complexity**: `O(n)`

## 🏷️ Tags
`Array` `Hash Map` `Sorting`