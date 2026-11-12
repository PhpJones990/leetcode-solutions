class Solution {
public:
    string removeOuterParentheses(string s) {
        string current_primitive = ""; 
        int count = 0; 
        string result = ""; 

        for (char c : s) 
        {
            if (c == '(') count++; 
            else if (c == ')') count--; 

            current_primitive += c; 

            if (count == 0) 
            {
                string primitive = ""; 

                for (int i = 1; i < current_primitive.length() - 1; i++) 
                {
                    primitive += current_primitive[i]; 
                }

                result += primitive; 

                current_primitive = ""; 
            }
        }

        return result; 
    }
};