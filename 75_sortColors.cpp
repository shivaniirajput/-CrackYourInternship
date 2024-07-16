class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int index = 0;

        while(index <= right)
        {
            if(nums[index]==0)
            {
                swap(nums[index],nums[left]);
                left++;
                index++;
            }
            else if(nums[index]==2)
            {
                swap(nums[index],nums[right]);
                right--;
                //index++ nhi krenge kuki ab exchange hokr jo value aayi hai vo kux b ho skti 
                //hai
                //kuki right side ki  value sorted nhi hein
            }
            else
            {
                index++;
            }
        }
        
    }
};