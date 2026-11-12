class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        current_sum = 0  
        result = [] 

        for num in nums: 
            current_sum += num 
            result.append(current_sum) 

        return result 