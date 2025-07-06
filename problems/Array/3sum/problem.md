# 🧠 Question: 3sum

## 📘 Problem Statement
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
 
- **Constraints**: 
    `3 <= nums.length <= 3000`
    `-10^5 <= nums[i] <= 10^5`

## 🔍 Example
```plaintext
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
```

## 💡 Solution
[➡️ View C++ Code](./Solution.cpp)
[➡️ View Java Code](./Solution.java)

## 🧾 Explanation

- **Approach**: The three-sum approach is a method to find all unique triplets in a list that add up to zero. First, the list is sorted to make it easier to handle duplicates and apply the two-pointer technique. Then, for each number in the list, it is treated as a fixed starting point. Two pointers are used — one starting just after the fixed number and the other at the end of the list — to search for two other numbers that, together with the fixed number, sum to zero. If the sum is too small, the left pointer is moved right to increase the total; if it's too large, the right pointer is moved left to decrease it. When a valid triplet is found, it is added to the result, and the pointers are adjusted to skip duplicates. This process continues for all elements, efficiently finding all unique combinations without unnecessary checks.

- **Time Complexity**: `O(n^2)`  
- **Space Complexity**: `O(n)`

## 🏷️ Tags
`Array` `Two Pointers` `Sorting`