class Solution:
    def isHappy(self, n: int) -> bool:
        if n == 1: return True 

        def sum_of_square_digit(num: int) -> int: 
            result = 0 
            while (num != 0): 
                result += (num % 10) * (num % 10) 
                num //= 10 
            return result 

        slow = sum_of_square_digit(n) 
        fast = sum_of_square_digit(sum_of_square_digit(n))
        while (slow != 1 or fast != 1): 
            if slow == fast: return False 
            slow = sum_of_square_digit(slow) 
            fast = sum_of_square_digit(sum_of_square_digit(fast)) 
        return True 