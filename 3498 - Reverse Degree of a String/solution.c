int reverseDegree(char* s) {
    int deg = 0; 
    int length = strlen(s); 
    for (int i = 0; i < length; i++) 
    {
        int product = (26 - (s[i] - 'a')) * (i + 1); 
        deg += product; 
    }
    return deg; 
}