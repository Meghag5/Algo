//https://leetcode.com/problems/majority-element/submissions/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int temp = 0,ans = 0;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        for(auto i:m){
            if(i.second > temp){
                temp = i.second;
                ans = i.first;
            }
        }
        
        return ans;
    }
};
