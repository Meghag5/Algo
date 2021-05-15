// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int c0=0,c1=0,c2=0;
        int n = nums.size();
        
        // we are first traversing the loop and counting the number of 0's , 1's and 2's.
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                c0++;
            }
            if(nums[i] == 1){
                c1++;
            }
            if(nums[i] == 2){
                c2++;
            }
        }
        
        // now we will insert 0 till numbers are equal to c0
        for(int i=0;i<c0;i++){
            nums[i] = 0;
        }
        
        // now we will insert 1 till numbers are equal to c1
        for(int i=c0;i<c0+c1;i++){
            nums[i] = 1;
        }
        
        // now we will insert 2 till numbers are equal to c2
        for(int i=c0+c1;i<n;i++){
            nums[i] = 2;
        }
        
    }
};
