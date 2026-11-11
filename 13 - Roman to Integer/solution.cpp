#include <unordered_map> 

class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> roman_map = {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50}, 
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}
        };

        // "MCMXCIV"
        int length = s.length(); 
        int result = 0; 
        int i;
        for (i = length - 1; i >= 1; i--) 
        {
            if (roman_map.at(s[i]) <= roman_map.at(s[i-1])) 
            {
                result += roman_map.at(s[i]); 
            }
            else 
            {
                result += roman_map.at(s[i]) - roman_map.at(s[i-1]); 
                i--; 
            }
        }
        if (i == 0) result += roman_map.at(s[0]); 

        return result; 
    }
};