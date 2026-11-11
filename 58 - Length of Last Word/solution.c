int lengthOfLastWord(char* s) {
    int length = strlen(s); 

    int word_length = 0; 
    bool in_word = false; 
    for (int i = 0; i < length; i++) 
    {
        if (s[i] != ' ' && !in_word) 
        {
            in_word = true; 
            word_length = 0; 
        }
        else if (s[i] == ' ' && in_word) 
        {
            in_word = false; 
        }
        if (in_word) word_length++; 
    }
    return word_length; 
}