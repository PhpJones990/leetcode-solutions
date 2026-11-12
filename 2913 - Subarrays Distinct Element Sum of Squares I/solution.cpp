class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int result = 0; 
        int length = nums.size(); 

        for (int i = 0; i < length; i++) 
        {
            bool seen[101] = {false}; 
            int distinct = 0; 
            for (int j = i; j < length; j++) 
            {
                if (!seen[nums[j]]) 
                {
                    seen[nums[j]] = true; 
                    distinct++; 
                }
                result += distinct * distinct; 
            }
        }

        return result; 

    }
};