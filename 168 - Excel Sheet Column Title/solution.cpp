class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = ""; 

        while (columnNumber != 0)
        {
            char letter = (columnNumber % 26) + '@'; 
            if (letter == '@') letter = 'Z';
            result = letter + result; 
            if (columnNumber % 26 == 0) columnNumber--; 
            columnNumber /= 26; 
        } 

        return result; 
    }
};