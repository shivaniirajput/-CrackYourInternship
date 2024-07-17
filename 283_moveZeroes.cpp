class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int start=0, end=n-1,i=0;
        while(i<=end){
            if(nums[i]!=0){
                swap(nums[start],nums[i]);                  
                    start++;
            }
            i++;
        }
    }
};