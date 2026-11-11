int reverse(int x){
    int rev = 0; 
    
    while (x != 0) 
    {
        int lastDigit = x % 10; 
        if ((rev > 214748364) || (rev == 214748364 && lastDigit > 7)) return 0; 
        if ((rev < -214748364) || (rev == -214748364 && lastDigit < -8)) return 0; 
        rev = rev * 10 + lastDigit; 
        x /= 10; 
    }

    return rev; 
}