import java.util.*;
public class Solution {
    // most optimised code - O(n)
    public static int[] targetSum(int nums[],int target){
        HashMap<Integer,Integer> mp=new HashMap<>();// map of (value->index)
        for(int i=0;i<nums.length;i++){
            if(mp.get(target-nums[i])!=null) return new int[]{i,mp.get(target-nums[i])};
            else mp.put(nums[i],i);
        }
        return new int[]{-1,-1}; //if ans not exists
    }

    // Not optimised but beginner friendly-O(n2)
    public static int[] targetSumUsingLoops(int nums[],int target){
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<nums.length;j++){
                if(nums[i]+nums[j]==target) return new int[]{i,j};
            }
        }
        return new int[]{-1,-1}; //if ans not exists
    }

    // Optimised - O(nlogn)
    public static int[] targetSumUsingSorting(int nums[],int target){
        Arrays.sort(nums);
        int i=0;
        int j=nums.length-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==target) return new int[]{i,j};
            if(target>sum) i++;
            else j--;
        }
        return new int[]{-1,-1}; //if ans not exists
    }

    public static void main(String[] args) {
        int nums[]={2,7,11,15};
        int target=9;
        int ans[]=targetSum(nums,target);
        System.out.println(ans[0]+" "+ans[1]);
    }
}