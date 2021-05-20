//https://leetcode.com/problems/unique-paths/submissions/

int t[1000][1000];

class Solution {
public:
    int uniquePaths(int m, int n) {
        int i=0,j=0;
        memset(t,-1,sizeof(t));
        return solve(i,j,m,n);
    }
    int solve(int i,int j,int m,int n){
        
        if(i == m-1 && j == n-1){
            return 1;
        }
        
        if(i>m || j>n){
            return 0;
        }
        
        if(t[i][j] != -1){
            return t[i][j];
        }
        
        return t[i][j] = solve(i+1,j,m,n) + solve(i,j+1,m,n);
    }
};
