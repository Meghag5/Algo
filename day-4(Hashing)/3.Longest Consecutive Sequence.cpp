//https://leetcode.com/problems/longest-consecutive-sequence/submissions/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> q;
        int n = nums.size();
        unordered_set<int> s;
        
        if(n == 0){
            return 0;
        }
        
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        
        for(auto i:s){
            q.push(i);
        }
        
        int ans = INT_MIN;
        
        while(!q.empty()){
            int count = 0;
            int prev = q.top();
            q.pop();
            while((q.top() - prev) == 1 && !q.empty()){
                count++;
                prev = q.top();
                q.pop();
            }
            ans = max(ans,count);
        }
        
        return ans+1;
    }
};
