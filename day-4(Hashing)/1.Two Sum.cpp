//https://leetcode.com/problems/two-sum/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_set<int> temp;
        int n = nums.size();
        
        for(int i=0;i<n-1;i++){
            for(int j=1;j<n;j++){
            if(nums[i] + nums[j] == target  && i!=j){
                temp.insert(i);
                temp.insert(j);
                break;
            }
            }
        }
        
        for(auto i:temp){
            ans.push_back(i);
        }
        
        return ans;
    }
};

