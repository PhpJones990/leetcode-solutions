class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        fighter = None 
        count = 0 

        for num in nums: 
            if count == 0: 
                fighter = num 
                count = 1 
            elif fighter == num: 
                count += 1
            else: count -= 1
        
        return fighter 
            