class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //TC = O(n)
        //SC = O(1)

        int n = nums.size();
        int i = 0, j = 1;

        while(j < n)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i+1;

        // int count = 1;
        // for(int i = 1 ; i < nums.size() ; i++)
        // {
        //     if(nums[i]!=nums[i-1])
        //     {
        //        nums[count] = nums[i];
        //        count++; 
        //     }
        // }
        // return count;
    }
};