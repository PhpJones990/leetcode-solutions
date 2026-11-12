class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, close = 0; 
        bool isOpen = false; 
        
        for (char c : s) 
        {
            if (c == '(') 
            {
                open++; 
                isOpen = true; 
            }
            else if (c == ')') 
            {
                if (open == 0) isOpen = false; 
                if (isOpen) open--; 
                else close++; 
            }
        }

        return open + close; 
    }
};