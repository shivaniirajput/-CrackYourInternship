class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //two pointer approach
        
        sort(nums.begin() , nums.end());
        int s = 0;
        int e = nums.size() - 1;

        while(s < e)
        {
            if(nums[s] + nums[e] == target)
            {
                return {s,e};
            }
            else if(nums[s] + nums[e] > target)
            {
                e--;
            }
            else
            {
                s++;
            }
        }
        return {-1,-1};
      
        
    }
};