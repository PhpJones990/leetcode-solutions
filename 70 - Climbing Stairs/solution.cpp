class Solution {
public:
    int helper(int n, std::unordered_map<int,int>& memo) 
    {
        if (n < 3) return n; 
        if (memo.count(n)) return memo[n]; 
        memo[n] = helper(n-1, memo) + helper(n-2, memo); 
        return memo[n]; 
    }

    int climbStairs(int n) {
        std::unordered_map<int, int> memo; 
        return helper(n, memo);  
    }
};