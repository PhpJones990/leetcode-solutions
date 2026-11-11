class Solution:
    def intToRoman(self, num: int) -> str:
        roman_letter = {
            1000: "M",
            900: "CM", 
            500: "D", 
            400: "CD", 
            100: "C", 
            90: "XC", 
            50: "L", 
            40: "XL", 
            10: "X", 
            9 : "IX", 
            5 : "V", 
            4 : "IV", 
            1 : "I", 
        }

        roman_number = "" 
        for k in roman_letter: 
            while num >= k: 
                roman_number += roman_letter[k] 
                num -= k 
        
        return roman_number 