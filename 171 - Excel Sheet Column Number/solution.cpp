class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0; 
        
        unsigned long long multiplier = 1; 
        for (int i = columnTitle.length() - 1; i >= 0; i--) 
        {
            result += ((int)(columnTitle[i] - 'A') + 1) * multiplier; 
            multiplier *= 26; 
        }

        return result; 
    }
};