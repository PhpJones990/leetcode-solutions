class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; 
        string result = ""; 
        int length = s.length(); 
        int increment = 2 * (numRows - 1); 
        for (int r = 0; r < numRows; r++) 
        {
            for (int c = r; c < length; c += increment) 
            {
                result += s[c]; 
                if (r > 0 && r < numRows - 1 && (c + increment - 2 * r) < length) 
                {
                    result += s[c + increment - 2 * r]; 
                }
            }
        }

        return result; 

    }
};