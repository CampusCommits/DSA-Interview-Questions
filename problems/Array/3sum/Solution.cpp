#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            int val=nums[i];
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[j]+nums[k];
                if(sum==-val){
                    ans.push_back({val,nums[j],nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
                else if(sum<(-val)) j++;
                else k--;
            }
        }
        return ans;
    }    
}