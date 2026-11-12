class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        // int small_index = std::numeric_limits<int>::max(); 
        // bool is_found = false; 

        for (int i = 0; i < nums.size(); i++)
        {
            int digit_sum = 0; 
            while (nums[i] != 0) 
            {
                digit_sum += nums[i] % 10; 
                nums[i] /= 10; 
            }
            if (digit_sum == i) 
            {
                // is_found = true; 
                // small_index = (small_index < i) ? small_index : i; 
                return i; 
            }
        }

        // return (is_found) ? small_index : -1; 
        return -1; 
    }
};