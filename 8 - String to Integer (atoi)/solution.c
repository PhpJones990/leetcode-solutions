int myAtoi(char* s) {
    int result = 0; 
    bool isNegative = false; 
    bool isNumberStart = false; 
    bool isSignPresent = false; 

    int length = strlen(s); 
    for (int i = 0; i < length; i++) 
    {
        if ((s[i] < '0' || s[i] > '9') && s[i] != '-' && s[i] != ' ' && s[i] != '+') return (isNegative) ? -result : result; 
        if (s[i] == ' ') 
        {
            if (isNumberStart || isSignPresent) return (isNegative) ? -result : result; 
            continue; 
        } 
        if ((s[i] == '-' || s[i] == '+') && (isNumberStart || isSignPresent)) return (isNegative) ? -result : result; 
        if (isNumberStart && (s[i] < '0' || s[i] > '9')) return (isNegative) ? -result : result; 
        if (s[i] == '+') 
        {
            isSignPresent = true; 
            continue; 
        } 
        if (s[i] == '-' && !isNumberStart) 
        {
            isNegative = true; 
            isSignPresent = true; 
            continue; 
        } 
        if (s[i] >= '0' && s[i] <= '9') 
        {
            isNumberStart = true; 
            int digit = (int)s[i] - '0'; 

            if (!isNegative && ((result > 214748364) || (result == 214748364 && digit > 7))) return 2147483647; 

            if (isNegative && ((result > 214748364) || (result == 214748364 && digit >= 8))) return -2147483648; 

            result = (result * 10) + digit; 
        } 
    }
    return (isNegative) ? -result : result;  
}