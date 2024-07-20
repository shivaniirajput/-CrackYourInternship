class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //TC = O(n)
        //SC = O(n)
        int n = nums.size();

        unordered_map<int, int>mp;
        int sum = 0;

        mp[0] = 1;
        int result = 0;

        for(int i = 0 ; i < n ; i++){
            sum += nums[i];

            int rem = sum%k;
            
            //important case
            if(rem < 0){
                rem += k;
            }
            //agar map me phle se vo remainder present h tb
            if(mp.find(rem) != mp.end()){
                result += mp[rem];
            }

            mp[rem]++;
        }

        return result;

        //brute force 
        //TC = O(N^2)
        //SC = O(1)
        
        // int n = nums.size();

        // //cumulative sum
        // for(int i = 1; i<n ; i++){
        //     nums[i] += nums[i-1];
        // }

        // //main calculation
        // int count = 0;
        // for(int i = 0; i < n ; i++)
        // {
        //     for(int j = i ; j < n ; j++){
        //         int sum = (i==0)? nums[j] : nums[j]-nums[i-1];

        //         if(sum%k == 0){
        //             count++;
        //         }
        //     }
        // }

        // return count;
    }
};