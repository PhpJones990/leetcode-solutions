/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1; 
    for (int i = digitsSize - 1; i >= 0; i--) 
    {
        if (digits[i] < 9) 
        {
            carry = 0; 
            break; 
        }
    }

    int neededSize = digitsSize + carry; 
    int* plusOne = (int*)malloc(neededSize * sizeof(int)); 
    *returnSize = neededSize; 

    carry = 1; 
    int index = neededSize - 1; 
    for (int i = digitsSize - 1; i >= 0; i--) 
    {
        int sum = digits[i] + carry; 
        plusOne[index] = sum % 10; 
        carry = sum / 10; 
        index--; 
    } 

    if (carry > 0) 
    {
        plusOne[0] = carry; 
    }
    return plusOne; 
}