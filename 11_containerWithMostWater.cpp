class Solution {
public:
    int maxArea(vector<int>& height) {
        TC = O(n)
        SC = O(1)
        
        int l = 0;
        int h = height.size() - 1;

        int maxArea = 0;

        while(l <= h)
        {
            int currArea = min(height[l], height[h]) * (h-l);
            maxArea = max(maxArea, currArea);

            if(height[l] < height[h])
            {
                l++;
            }
            else{
                h--;
            }
        }
        return maxArea;
    }
};