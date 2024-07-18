class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using sorting
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int majroityElement = nums[n/2];

        return majroityElement;
    }
};