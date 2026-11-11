int strStr(char* haystack, char* needle) {
    int hay_length = strlen(haystack); 
    int needle_length = strlen(needle); 
    if (hay_length < needle_length) return -1; 
    int k = -1; 
    int j = 0; 
    bool is_found = false; 
    for (int i = 0; i < hay_length; i++) 
    {
        if (j >= needle_length) break; 
        if (haystack[i] != needle[j]) 
        {
            if (is_found) i = k; 
            k = -1; 
            j = 0; 
            is_found = false; 
            continue; 
        }
        else 
        {
            if (!is_found) k = i; 
            is_found = true; 
            j++; 
        }
    }

    return (j >= needle_length) ? k : -1; 
}