class Solution:
    def isValid(self, s: str) -> bool:
        stack = [] 

        for c in s: 
            if not stack and (c == ')' or c == '}' or c == ']'): return False 
            if c == '(' or c == '{' or c == '[': stack.append(c) 
            match c: 
                case ')': 
                    if stack[-1] != '(': return False 
                    stack.pop() 
                case '}': 
                    if stack[-1] != '{': return False 
                    stack.pop()
                case ']': 
                    if stack[-1] != '[': return False 
                    stack.pop()

        if stack: return False 

        return True 
                    