class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        isOpen = False  
        openp = 0 
        close = 0 

        for c in s: 
            if c == '(': 
                openp += 1 
                isOpen = True 
            elif c == ')': 
                if openp == 0: isOpen = False  
                if isOpen: openp -= 1 
                else: close += 1  

        return openp + close 