import itertools 
class Solution:
    def totalNumbers(self, digits: List[int]) -> int:
        count = 0 
        seen = set() 
        for combo in itertools.permutations(digits, 3): 
            if combo[0] != 0: 
                number = combo[0] * 100 + combo[1] * 10 + combo[2] 
                if number % 2 == 0 and number not in seen:
                    count += 1 
                    seen.add(number) 

        return count 