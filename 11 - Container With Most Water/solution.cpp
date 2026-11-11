class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1; 
        int max_area = -1;  
        while (l < r) 
        {
            int level = (height[l] > height[r]) ? height[r] : height[l]; 
            int steps = r - l;
            int current_area = level * steps;
            if (max_area < current_area) max_area =     current_area;
            if (height[l] < height[r]) l++; 
            else r--; 
        }

        return max_area;
    }
};