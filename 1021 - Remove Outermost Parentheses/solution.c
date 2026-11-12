char* removeOuterParentheses(char* s) {
    int length = strlen(s);
    char* res = malloc((length + 1) * sizeof(char)); 
    int open = 0; 
    int j = 0; 

    for (int i = 0; i < length; i++) 
    {
        if (s[i] == '(') 
        {
            if (open > 0) res[j++] = s[i]; 
            open++; 
        }
        else 
        {
            open--; 
            if (open > 0) res[j++] = s[i]; 
        }
    }
        res[j] = '\0'; 
        return res; 
}