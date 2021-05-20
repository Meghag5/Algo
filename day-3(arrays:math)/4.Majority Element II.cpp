//https://leetcode.com/problems/majority-element-ii/submissions/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int temp = 0;
        vector<int> ans;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        for(auto i:m){
            if(i.second>n/3){
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};
