class Solution {
public:
    vector<int> countBits(int n) {
        //Approach 1
        //T.C = O(n)
        vector<int>ans(n+1);

        if(n == 0)
        {
            return ans;
        }
        ans[0] = 0;
        
        for(int i = 1 ; i <= n ; i++)
        {
            if(i%2 != 0)
            {
                ans[i] = ans[i/2] + 1;
            }
            else{
                ans[i] = ans[i/2];
            }
        }
        return ans;

        //Approach 2
        //T.C = O(nlogn)
        // vector<int>ans(n+1);
        // for(int i = 0 ; i <= n ; i++)
        // {
        //     ans[i] = __builtin_popcount(i);
        // }
        // return ans;
    }
};