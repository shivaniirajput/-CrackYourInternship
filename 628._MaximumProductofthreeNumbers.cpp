class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        //using sorting
        //TC = O(nlogn)
        //SC = O(1)
        sort(nums.begin(), nums.end());

        int n = nums.size();

        return max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);
    }
};