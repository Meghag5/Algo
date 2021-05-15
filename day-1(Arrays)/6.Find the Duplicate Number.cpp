// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(), ans=0;
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]] == 2){
                ans = nums[i];
                break;
            }
        }
        
        return ans;
    }
};
