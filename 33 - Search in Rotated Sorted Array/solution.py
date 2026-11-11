class Solution:
    def search(self, nums: list[int], target: int) -> int:
        if not nums: return -1 

        length = len(nums) 
        left, right = 0, length - 1 

        while left+1 < right: 
            mid = left + (right - left) // 2 

            if nums[mid] == target: return mid 
            elif target <= nums[length - 1]: 
                if nums[mid] <= nums[length - 1]: 
                    if nums[mid] < target: 
                        left = mid 
                    else: 
                        right = mid 
                else: 
                    left = mid 
            else: 
                if nums[mid] <= nums[length - 1]: 
                    right = mid 
                else: 
                    if nums[mid] < target: 
                        left = mid 
                    else: 
                        right = mid

        if nums[right] == target: return right 
        elif nums[left] == target: return left 
        else: return -1 