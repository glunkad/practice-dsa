class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size();
        int mxArea = 0;
        // TC O(N)
        int left = 0;
        int right = sz - 1;
        while(left < right){
            int area = (right - left)*min(height[left],height[right]);
            mxArea = max(mxArea,area);
            if(height[left] < height[right]){
                left += 1;
            }
            else{
                right -= 1;
            }
        }
        return mxArea;
    }
};