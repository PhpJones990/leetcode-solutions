#include <stack>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> bracket_stack; 
        std::size_t length = s.length(); 

        for (std::size_t i = 0; i < length; i++) 
        {
            if (bracket_stack.empty() && 
                (s[i] == ')' || s[i] == ']' || s[i] == '}'))
            {
                return false; 
            }
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
            {
                bracket_stack.push(s[i]); 
            }
            switch (s[i]) 
            {
                case ')': 
                    if (bracket_stack.top() != '(') return false; 
                    bracket_stack.pop(); 
                    break; 
                case ']': 
                    if (bracket_stack.top() != '[') return false; 
                    bracket_stack.pop(); 
                    break; 
                case '}': 
                    if (bracket_stack.top() != '{') return false; 
                    bracket_stack.pop(); 
                    break; 
            }
        } 
        if (!bracket_stack.empty()) return false; 

        return true;        
    }
};