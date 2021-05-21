//https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int front = 0, last = 0, ans = 0;
        int n = s.length();
        unordered_map<char,int> m;
        
        while(last < n){
            if(m.find(s[last]) != m.end()){
                front = max(m[s[last]] + 1,front);
            }
            m[s[last]] = last;
            cout<<front<<" "<<last<<endl;
            ans = max(ans,last-front+1);
            last++;
        }
        
        return ans;
    }
};
