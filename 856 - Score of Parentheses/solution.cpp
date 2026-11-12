class Solution {
public:
    int scoreOfParentheses(string s) {
        int count = 0; 
        int score = 0; 
        char preChar; 

        for (char c : s) 
        {
            if (c == '(') 
            {
                count++; 
            }
            else if (c == ')') 
            {
                if (preChar == '(') score += (int)(pow(2, count-1)); 
                count--; 
            } 
            preChar = c; 
        }

        return score; 
    }
};