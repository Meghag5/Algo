//https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1#

int maxLen(int A[], int n)
{
    unordered_map<int,int> m;
    int ans = 0, sum = 0;
    
    for(int i=0;i<n;i++){
        sum += A[i];
        if(sum == 0){
            ans = max(ans, i+1);
        }
        else if(m.find(sum) != m.end()){
            ans = max(i-m[sum],ans);
        }
        else{
            m[sum] = i;
        }
    }
    
    return ans;
}
