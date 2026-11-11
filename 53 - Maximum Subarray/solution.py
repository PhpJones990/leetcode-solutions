class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        currSum = nums[0] 
        maxSum = nums[0] 

        for num in nums[1:]: 
            currSum = max(num, currSum + num) 
            maxSum = max(maxSum, currSum) 

        return maxSum