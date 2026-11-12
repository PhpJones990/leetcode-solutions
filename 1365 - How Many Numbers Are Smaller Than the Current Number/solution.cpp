class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> numsCopy = nums; 

        sort(numsCopy.begin(), numsCopy.end()); 

        unordered_map<int,int> smallerMap; 

        for (int i = 0; i < numsCopy.size(); i++) 
        {
            if (i != 0 && numsCopy[i] == numsCopy[i-1]) continue; 
            smallerMap[numsCopy[i]] = i; 
        } 

        vector<int> result(nums.size()); 
        for (int i = 0; i < nums.size(); i++) 
        {
            result[i] = smallerMap[nums[i]]; 
        } 

        return result; 
    }
};