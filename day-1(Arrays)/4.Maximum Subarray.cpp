// https://leetcode.com/problems/maximum-subarray/submissions/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0,ans, temp=nums[0];
        int n = nums.size();
        
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                    sum += nums[j];
                temp = max(temp,sum);
            }
        }
        
        sort(nums.begin(),nums.end());
        
        if(temp <= 0){
            ans = nums[n-1];
        }
        else{
            ans = temp;
        }
        
        return temp;
    }
};
