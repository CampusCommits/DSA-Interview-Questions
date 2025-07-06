#include<bits/stdc++.h>
using namespace std;

// most optimised code - O(n)
vector<int> targetSum(vector<int> &nums,int target){
    unordered_map<int,int> mp; // map of (value->index)
    for(int i=0;i<nums.size();i++){
        if(mp.count(target-nums[i])) return {i,mp[nums[i]]};
        else mp[nums[i]]=i;
    }
    return {-1,-1}; //if ans not exists
}

// Not optimised but beginner friendly-O(n2)
vector<int> targetSumUsingLoops(vector<int> &nums,int target){
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(nums[i]+nums[j]==target) return {i,j};
        }
    }
    return {-1,-1}; //if ans not exists
}

// Optimised - O(nlogn)
vector<int> targetSumUsingSorting(vector<int> &nums,int target){
    sort(nums.begin(),nums.end());
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum==target) return {i,j};
        if(target>sum) i++;
        else j--;
    }
    return {-1,-1}; //if ans not exists
}

int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> ans=targetSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}