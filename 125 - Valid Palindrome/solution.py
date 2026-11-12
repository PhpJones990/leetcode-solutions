class Solution:
    def isPalindrome(self, s: str) -> bool:
        if len(s) == 0: return True 

        word = "" 
        for ch in s: 
            if ch.isalnum(): 
                word += ch 
        
        word = word.lower() 
        if len(word) == 0: return True 

        left = 0 
        right = len(word) - 1 

        while (left <= right): 
            if word[left] != word[right]: return False 
            left += 1 
            right -= 1 

        return True 