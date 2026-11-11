class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay_length = haystack.length(); 
        int needle_length = needle.length(); 

        if (needle_length == 0) return 0; 
        int lps[needle_length]; 
        for (int i = 0; i < needle_length; i++) lps[i] = 0; 

        int preLps = 0, i = 1; 
        while (i < needle_length) 
        {
            if (needle[i] == needle[preLps]) 
            {
                lps[i] = preLps + 1; 
                preLps++; 
                i++; 
            }
            else if (preLps == 0) 
            {
                lps[i] = 0; 
                i++; 
            }
            else 
            {
                preLps = lps[preLps - 1]; 
            }
        }

        i = 0; 
        int j = 0; 
        while (i < hay_length) 
        {
            if (haystack[i] == needle[j]) 
            {
                i++; 
                j++; 
            }
            else 
            {
                if (j == 0) 
                {
                    i++; 
                }
                else 
                {
                    j = lps[j - 1]; 
                }
            }
            if (j == needle_length) return i - needle_length; 
        }
        return -1; 
    }
};