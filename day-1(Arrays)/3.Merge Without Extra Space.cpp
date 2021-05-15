// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long ans[n+m+1];
            for(int i=0;i<n;i++){
                ans[i] = arr1[i];
            }
            
            for(int i=n;i<n+m;i++){
                ans[i] = arr2[i-n];
            }
            
            sort(ans,ans+n+m);
            for(int i=0;i<n;i++){
                arr1[i] = ans[i];
            }
            
            for(int i=0;i<m;i++){
                arr2[i] = ans[n+i];
            }
        } 
};
