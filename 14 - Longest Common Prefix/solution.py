class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs = sorted(strs) 
        length = len(strs[0]) if len(strs[0]) < len(strs[-1]) else len(strs[-1]) 
        
        prefix = "" 
        for i in range(length): 
            if strs[0][i] == strs[-1][i]: 
                prefix += strs[0][i] 
            else: break 

        return prefix 
        