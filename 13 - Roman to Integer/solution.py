class Solution:
    def romanToInt(self, s: str) -> int:
        roman_map = {
            "I" : 1, 
            "V" : 5, 
            "X" : 10, 
            "L" : 50, 
            "C" : 100, 
            "D" : 500, 
            "M" : 1000
        } 

        length = len(s) 
        result = 0 
        i = length - 1 
        while i >= 1: 
            if roman_map[s[i]] <= roman_map[s[i-1]]: 
                result += roman_map[s[i]] 
            else: 
                result += roman_map[s[i]] - roman_map[s[i-1]] 
                i -= 1
            i -= 1 
        if i == 0: result += roman_map[s[0]] 
        
        return result 